#include "../include/linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

LinkedList *init_list() {
  LinkedList *list = malloc(sizeof(LinkedList));
  if (list == NULL) {
    printf("Error allocationg memory to linked list!\n");
    return NULL;
  }
  list->head = NULL;
  return list;
}

void push_front(LinkedList *list, int data) {

  if (list == NULL) {
    printf("Error, this linked list is null!\n");
    return;
  }

  Node *new_node = malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = list->head;
  list->head = new_node;
}

void print_list(LinkedList *list) {
  if (list->head == NULL) {
    printf("It's empty");
    return;
  }

  Node *current = list->head;

  while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

void free_list(LinkedList *list) {
  Node *current = list->head;
  while (current != NULL) {
    Node *temp = current;
    current = current->next;
    free(temp);
  }
  free(list);
}
