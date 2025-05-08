#include "../include/linkedlist.h"
#include <assert.h>
#include <stdio.h>

int main() {
  LinkedList *l = init_list();

  push_front(l, 10);
  push_front(l, 20);
  printf("✅ inserting elements...\n");

  assert(l->head->data == 20);
  assert(l->head->next->data == 10);
  printf("✅ insertion tests were successful!\n");

  free_list(l);
  printf("✅ list cleared successfully\n");
  return 0;
}
