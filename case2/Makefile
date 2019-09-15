CC = g++
STANDART = -std=c++11
CFLAGS=-c -Wall

all: test program

test: operation.o
	$(CC) $(STANDART) -o test.exe test.cpp operation.o -Wall -ldl -lcppunit

program: operation.o
	$(CC) $(STANDART) -o main.exe main.cpp operation.o  -Wall
	
operation.o: operation.cpp
	$(CC) $(STANDART) operation.cpp $(CFLAGS)
	
clean:
	rm -rf *.o test program
