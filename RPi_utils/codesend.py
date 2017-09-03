from ctypes import cdll, c_int

send = None

lib = cdll.LoadLibrary('./libcodesend.so')
print lib
send = lib.send
send.restype = c_int

print 'Not running on target host'

print send(4261203)
