from pynput import keyboard         
from pynput.keyboard import Key, Controller

kb = Controller()

while True:
    kb.press(Key.scroll_lock)
    kb.release(Key.scroll_lock)
