import json

def load_state(state, file):
    with open(file, 'r') as f:
        state.update(json.load(f))

def save_state(state, file):
    with open(file, 'w') as f:
        json.dump(state, f, indent=4)