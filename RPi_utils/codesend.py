from ctypes import cdll, c_int

def main():
    ''' Entrypoint '''
    send = None
    try:
        lib = cdll.LoadLibrary('./libcodesend.so')
        send = lib.send
        send.restype = c_int
    except:
        print 'Not running on target host'
        return

        print send

if __name__ == '__main__':
    main()
