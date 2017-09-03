from ctypes import cdll, c_int

send = None

lib = cdll.LoadLibrary('./libcodesend.so')
print lib
send = lib.send
send.restype = c_int

send(4261203, 172, 1, 0)
