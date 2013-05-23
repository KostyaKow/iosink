CC=gcc
CFLAGS=-lX11 -Wall

default: main.o control_wrapper.o
	$(CC) $(CFLAGS) main.o control_wrapper.o -o prog.out

main.o: main.c config.h
	$(CC) $(CFLAGS) -c main.c

control_wrapper.o: control_wrapper.c control_wrapper.h config.h
	$(CC) $(CFLAGS) -c control_wrapper.c

clean: 
	rm -rf *.o prog.out
