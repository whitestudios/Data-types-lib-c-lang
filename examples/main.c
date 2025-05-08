#include "../include/linkedlist.h"

int main() {
  LinkedList *l = init_list();
  push_front(l, 10);
  push_front(l, 20);
  push_front(l, 40);
  print_list(l);
  free_list(l);
  return 0;
}
