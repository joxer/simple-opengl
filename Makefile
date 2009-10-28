CC = gcc
FILES = main.c
CPP_FILES = src/square.cpp src/point.cpp src/figure.cpp
OBJ_FILES = square.o point.o figure.o

main:
	$(CC) main.cpp -o main.o -lglut static.a
clean:
	rm *.o *~

static:
	$(CC) -Wall -c $(CPP_FILES)
	ar -cvq static.a $(OBJ_FILES)