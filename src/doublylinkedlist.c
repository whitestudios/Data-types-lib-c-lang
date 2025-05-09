#include "../include/doublylinkedlist.h"
#include <stdio.h>

DoublyLinkedList *init_dblist() {
  DoublyLinkedList *l = malloc(sizeof(DoublyLinkedList));
  l->head = NULL;
  return l;
};

void append(DoublyLinkedList *l, int data) {
  NodeDbl *new = malloc(sizeof(NodeDbl));
  new->data = data;

  if (l->head == NULL) {
    new->next = NULL;
    new->prev = NULL;
    new->data = data;
    l->head = new;
    return;
  }

  NodeDbl *current = l->head;
  while (current->next != NULL) {
    current = current->next;
  }

  new->prev = current;
  new->next = NULL;
  current->next = new;

  return;
}

void prepend(DoublyLinkedList *l, int data) {
  NodeDbl *new = malloc(sizeof(NodeDbl));

  new->data = data;
  new->prev = NULL;

  if (l->head == NULL) {
    new->next = NULL;
    l->head = new;
    return;
  }

  new->next = l->head;
  l->head = new;
  return;
}

void free_dblist(DoublyLinkedList *l) {
  NodeDbl *current = l->head;

  while (current != NULL) {
    NodeDbl *temp = current;
    current = current->next;

    free(temp);
  }

  free(l);
  return;
}

void print_dblist(DoublyLinkedList *l) {
  if (l->head == NULL) {
    printf(" \n");
    return;
  }

  NodeDbl *current = l->head;

  while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
  }

  printf("NULL\n");
  return;
}

// void insert(DoublyLinkedList *l, u_int index, int data){}
