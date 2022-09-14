import ctypes

lib = ctypes.CDLL("C:/Moi/C/c_py/mylib2.so")

func = lib.display

func.argtypes = [ctypes.c_char_p, ctypes.c_int]
func.restype = ctypes.c_char_p

func(b"Behrouz", 40)
