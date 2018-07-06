#!/usr/bin/python


CHAN_NUM = 8
SAMPLES   = 100

def write_to_file(fd, val):
    fd.write(chr(val%256))
    fd.write(chr((val>>8)%256))

with open("source.bin","wb") as fd:
    write_to_file(fd, CHAN_NUM)
    for t in range(SAMPLES):
        #channel 0 : a square
        if t%10>=5:
            write_to_file(fd, 0)
        else:
            write_to_file(fd, 65535)
        if CHAN_NUM<2:
            continue
        
        
        #channel 1 : a constant
        write_to_file(fd, 32768)
        if CHAN_NUM<3:
            continue

        #channel 2 : a ramp
        write_to_file(fd, (t*128)%65536)
        if CHAN_NUM<4:
            continue

        #channel 3 : a lower frequency sqaure
        if t%100>50:
            write_to_file(fd, 0)
        else:
            write_to_file(fd, 65535)
        if CHAN_NUM<5:
            continue

        for c in range(CHAN_NUM - 4):
            write_to_file(fd, 0)

