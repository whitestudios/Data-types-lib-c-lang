#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <stdlib.h>
#include <sys/types.h>

// NodeDbl -> Node Doubly Linked List
typedef struct NodeDbl {
  struct NodeDbl *prev;
  struct NodeDbl *next;
  int data;
} NodeDbl;

typedef struct DoublyLinkedList {
  struct NodeDbl *head;
} DoublyLinkedList;

DoublyLinkedList *init_dblist();
void append(DoublyLinkedList *l, int data);
void prepend(DoublyLinkedList *l, int data);
void free_dblist(DoublyLinkedList *l);
void print_dblist(DoublyLinkedList *l);

// implementar contador e index no futuro em todas as listas;

// void insert(DoublyLinkedList *l, u_int index, int data);

#endif // !DOUBLY_LINKED_LIST_H
