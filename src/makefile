
all: base.o main.o add.o
	g++ base.o main.o

main.o: main.cpp
	g++ -c main.cpp

add.o: add.cpp
	g++ -c add.cpp

base.o: base.cpp
	g++ -c base.cpp

clean:
	rm *.o a.out
