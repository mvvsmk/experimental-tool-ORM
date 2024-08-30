#! /usr/bin/env python3


import pexpect
import time
import subprocess

key_map = {
    
    'f2': '\033OQ',         # F2 key for new tab in Byobu
    'enter': '\r',          # Enter key
    'up': '\033[A',         # Up arrow key
    'down': '\033[B',       # Down arrow key
    'right': '\033[C',      # Right arrow key
    'left': '\033[D',       # Left arrow key
    'w': 'w',               # 'w' key
    '1': '1',               # '1' key
    'ctrl+c': '\x03',       # Ctrl + C for interrupt
    'ctrl+d': '\x04',       # Ctrl + D for end of session
    
    'f1': '\033OP',         # F1 key
    'f3': '\033OR',         # F3 key
    'f4': '\033OS',         # F4 key
    'f5': '\033[15~',       # F5 key
    'f6': '\033[17~',       # F6 key
    'f7': '\033[18~',       # F7 key
    'f8': '\033[19~',       # F8 key
    'f9': '\033[20~',       # F9 key
    'f10': '\033[21~',      # F10 key
    'f11': '\033[23~',      # F11 key
    'f12': '\033[24~',      # F12 key
    'esc': '\033',          # Escape key
    'tab': '\t',            # Tab key
    'backspace': '\x7f',    # Backspace key
    'space': ' ',           # Spacebar
    'ctrl+a': '\x01',       # Ctrl + A (beginning of line)
    'ctrl+e': '\x05',       # Ctrl + E (end of line)
    'ctrl+z': '\x1A',       # Ctrl + Z (suspend process)
    'ctrl+x': '\x18',       # Ctrl + X
    'ctrl+v': '\x16',       # Ctrl + V
    'ctrl+s': '\x13',       # Ctrl + S (pause output)
    'ctrl+q': '\x11',       # Ctrl + Q (resume output)
    'ctrl+r': '\x12',       # Ctrl + R (reverse search)
    'ctrl+k': '\x0B',       # Ctrl + K (delete to end of line)
    'ctrl+u': '\x15',       # Ctrl + U (delete to beginning of line)
    'ctrl+w': '\x17',       # Ctrl + W (delete word before cursor)
    'ctrl+t': '\x14',       # Ctrl + T (transpose characters)
    'ctrl+f': '\x06',       # Ctrl + F (move forward one character)
    'ctrl+b': '\x02',       # Ctrl + B (move back one character)
}

def start_byobu():
    session = pexpect.spawn('byobu')
    time.sleep(2)
    return session

def close_tab_byobu_close_session(session):
    session.sendline('exit')
    time.sleep(2)
    session.close()

def create_new_tab_byobu(session):
    session.send(key_map['f2'])
    time.sleep(1)
    return session

def open_corefreq_set_power_cap(session,powercap=76,default_powercap=76):
    session.sendline('corefreq-cli')
    time.sleep(2)
    session.send('w')
    time.sleep(1)
    for _ in range(11):
        session.send(key_map['down'])
        time.sleep(1)
    
    #enter menu
    session.send(key_map['enter'])
    time.sleep(1)
    change = default_powercap - powercap
    for _ in range(change) :
        
        # change powercap by one
        session.send(key_map['down'])
        time.sleep(0.5)
        session.send(key_map['down'])
        time.sleep(0.5)
        session.send(key_map['enter'])
        time.sleep(0.5)
        session.send(key_map['enter'])
        time.sleep(0.5)
    
    # close core freq
    session.send(key_map['ctrl+c'])
    time.sleep(0.5)
    
def open_corefreq_reset_power_cap(session,default_powercap=76):
    session.sendline('corefreq-cli')
    time.sleep(2)
    session.send('w')
    time.sleep(1)
    for _ in range(11):
        session.send(key_map['down'])
        time.sleep(1)
    
    #enter menu
    session.send(key_map['enter'])
    time.sleep(1)
    for _ in range(default_powercap // 50 + 1) :
        # inc powercap by 50
        for __ in range(9):
            session.send(key_map['up'])
            time.sleep(0.5)
        session.send(key_map['enter'])
        time.sleep(0.5)
        session.send(key_map['enter'])
        time.sleep(0.5)
    
    # close core freq
    session.send(key_map['ctrl+c'])
    time.sleep(0.5)

def make_session_set_powercap(powercap,default_powercap):
    session = start_byobu()
    create_new_tab_byobu(session)
    open_corefreq_set_power_cap(session=session,powercap=powercap,default_powercap=default_powercap)
    time.sleep(5)
    close_tab_byobu_close_session(session=session)

def make_session_reset_powercap(default_powercap):
    session = start_byobu()
    create_new_tab_byobu(session)
    open_corefreq_reset_power_cap(session=session,default_powercap=default_powercap)
    time.sleep(5)
    close_tab_byobu_close_session(session=session)


def zen3_toggle_prefetcher(session):
    session.send(key_map['down'])
    time.sleep(1)
    session.send(key_map['enter'])
    time.sleep(1)
    session.send(key_map['enter'])
    time.sleep(1)
    #disabledL L1P

    session.send(key_map['down'])
    time.sleep(1)
    session.send(key_map['down'])
    time.sleep(1)
    session.send(key_map['enter'])
    time.sleep(1)
    session.send(key_map['enter'])
    time.sleep(1)
    #disabledL L1P

    session.send(key_map['down'])
    time.sleep(1)
    session.send(key_map['down'])
    time.sleep(1)
    session.send(key_map['enter'])
    time.sleep(1)
    session.send(key_map['enter'])
    time.sleep(1)
    #disabledL L2P

def zen3_disable_smt(password):
    command = f"echo {password} | sudo -S ./bash/smt_ctrl.sh off"
    try:
        subprocess.run(command,shell=True,check=True)
    except Exception as e:
        print(f"Exception {e} while turing off hyper threading")

def zen3_disable_smt(password):
    command = f"echo {password} | sudo -S ./bash/smt_ctrl.sh on"
    try:
        subprocess.run(command,shell=True,check=True)
    except Exception as e:
        print(f"Exception {e} while turing on hyper threading")
    


def zen3_toggle_turbo(session):
    for __ in range(9):
        session.send(key_map['down'])
        time.sleep(0.5)
    session.send(key_map['enter'])
    time.sleep(1)
    session.send(key_map['enter'])
    #disabled Turbo

    
def make_session_disable_perfetcher(machine):
    session = start_byobu()
    create_new_tab_byobu(session)
    session.send('t')
    if machine == 'zen3':
        zen3_toggle_prefetcher(session=session)
    time.sleep(5)
    close_tab_byobu_close_session(session=session)

if __name__ == "__main__":
    # make_session_set_powercap(powercap=25,default_powercap=76)
    make_session_reset_powercap(default_powercap=76)