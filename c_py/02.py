import ctypes

lib = ctypes.CDLL("C:/Moi/C/c_py/mylib.so")

lib.display(b'Behrouz', 40)
