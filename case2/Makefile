all: test program

test: operation.o
	g++ -std=c++11 -o test.exe test.cpp operation.o -Wall -ldl -lcppunit

program: operation.o
	g++ -std=c++11 -o main.exe operation.o main.cpp -Wall
	
operation.o: operation.cpp
	g++ -c -std=c++11 operation.cpp -Wall
	
clean:
	rm -rf *.o test program
