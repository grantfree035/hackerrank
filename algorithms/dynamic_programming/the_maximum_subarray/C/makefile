
CC = g++
CFLAGS = -g -Wall

all: main

main: main.o max_subarray.o
	$(CC) $(CFLAGS) -o main main.o max_subarray.o

main.o: main.cpp max_subarray.h
	$(CC) $(CFLAGS) -c  main.cpp

max_subarray.o: max_subarray.cpp
	$(CC) $(CFLAGS) -c max_subarray.cpp

clean:
	rm main *.o
