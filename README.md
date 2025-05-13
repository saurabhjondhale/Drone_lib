# Drone_lib
Short coded library in C for basic drone instructions.


To use your C drone control library in Python, you'll need to create a Python binding. This allows Python code to call C functions directly. There are a few ways to do this, but the most practical and robust ones are:
Method 1: Using ctypes (Simple & Native)
gcc -Wall -fPIC -shared -o libdrone.so src/drone.c
import ctypes

# Load the shared library
drone = ctypes.CDLL('./libdrone.so')

# Call C functions (you may need to define argument/return types)
drone.drone_init()
drone.drone_takeoff()
drone.drone_move_forward.argtypes = [ctypes.c_float]
drone.drone_move_forward.restype = None
