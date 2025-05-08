CC = gcc
CFLAGS = -Wall -Iinclude

SRC = src/linkedlist.c
OBJ = $(SRC:.c=.o)

all: example test

example: examples/main.c $(SRC)
	$(CC) $(CFLAGS) -o bin/example examples/main.c $(SRC)

test: tests/test_linkedlist.c $(SRC)
	$(CC) $(CFLAGS) -o bin/test tests/test_linkedlist.c $(SRC)

clean:
	rm -rf bin/*

.PHONY: all clean test example
