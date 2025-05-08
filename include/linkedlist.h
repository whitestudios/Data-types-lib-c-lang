#ifndef LINKEDLIST
#define LINKEDLIST

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct LinkedList {
  Node *head;
} LinkedList;

LinkedList *init_list();
void push_front(LinkedList *list, int data);
void free_list(LinkedList *list);
void print_list(LinkedList *list);

#endif // !LINKEDLIST
