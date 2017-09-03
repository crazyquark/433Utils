from ctypes import cdll, c_int

send = None

lib = cdll.LoadLibrary('./libcodesend.so')
print lib
codesend = lib.codesend
codesend.restype = c_int

res = codesend(4261203, 172, 1, 0)
print 'Got: ', res