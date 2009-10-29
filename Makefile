CC = gcc
FILES = main.c
CPP_FILES = src/square.cpp src/point.cpp src/figure.cpp src/exceptions.cpp src/circle.cpp src/triangle.cpp
OBJ_FILES = square.o point.o figure.o exceptions.o circle.o triangle.o

main:	clean static	
	$(CC) main.cpp -o main.o -lglut static.a
clean:
	rm -f *.a *.o *~

static:
	$(CC) -Wall -c $(CPP_FILES)
	ar -cvq static.a $(OBJ_FILES)