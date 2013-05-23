CC=gcc
CFLAGS=-lX11

default: main.c control_wrapper.c
	$(CC) $(CFLAGS) control_wrapper.c main.c -o prog.out
