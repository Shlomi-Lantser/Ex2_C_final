CC = gcc
AR = ar
FLAGS = -Wall -g

all : connections
connections : main.c my_mat.c my_mat.h
	$(CC) $(FLAGS) -o connections main.c my_mat.c my_mat.h

.PHONY: clean all

clean:
	rm -f connections