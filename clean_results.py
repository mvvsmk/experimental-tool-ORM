#! /usr/bin/env python3

import os

def delete_empty_directories(path):
    # First, make a list of all directories in the current directory
    directories = [os.path.join(path, d) for d in os.listdir(path) if os.path.isdir(os.path.join(path, d))]
    
    # Recursively traverse all directories
    for directory in directories:
        delete_empty_directories(directory)
    
    # After processing all subdirectories, check if the current directory is empty
    if not os.listdir(path):
        print(f"Deleting empty directory: {path}")
        os.rmdir(path)

if __name__ == "__main__":
    root_dir = input("Enter the absolute path of the directory to clean up: ").strip()
    if os.path.isdir(root_dir):
        delete_empty_directories(root_dir)
    else:
        print(f"The provided path '{root_dir}' is not a valid directory.")
