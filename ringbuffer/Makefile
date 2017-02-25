CC=gcc
CFLAGS=-I.

ringbuffer: main.o ring.o
	$(CC) -o ringbuffer main.o ring.o -I.

clean:
	rm -rf *.o
	rm -rf ringbuffer
