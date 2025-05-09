CC = gcc
CFLAGS = -Wall -Iinclude

SRC = src/doublylinkedlist.c
OBJ = $(SRC:.c=.o)

all: example test

example: examples/main.c $(SRC)
	$(CC) $(CFLAGS) -o bin/example examples/main.c $(SRC)

test: tests/test_doublylinkedlist.c $(SRC)
	$(CC) $(CFLAGS) -o bin/test tests/test_doublylinkedlist.c $(SRC)

clean:
	rm -rf bin/*

.PHONY: all clean test example
