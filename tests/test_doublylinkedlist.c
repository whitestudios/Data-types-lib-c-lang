#include "../include/doublylinkedlist.h"
#include <assert.h>
#include <stdio.h>

int main() {
  DoublyLinkedList *list = init_dblist();
  prepend(list, 10);

  assert(list->head->data == 10);
  printf("First test done\n");

  append(list, 20);
  append(list, 30);

  assert(list->head->next->next->data == 30);

  printf("Second test done \n");
  prepend(list, 5);

  assert(list->head->data == 5);

  printf("Third test done\n");
  prepend(list, 1);

  assert(list->head->data == 1);
  printf("Fourth test done\n");

  printf("cleaning list\n");
  free_dblist(list);

  printf("Passou tudo!\n");

  return 0;
}
