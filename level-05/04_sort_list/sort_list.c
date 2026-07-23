#include "list.h"

//int cmp(int a, int b) { return (a <= b); }

t_list *sort_list(t_list *lst, int (*cmp)(int, int)) {
  t_list *i = lst;
  while (i) {
    t_list *j = i->next;
    while (j) {
      if (!cmp(i->data, j->data)) {
        int swap = i->data;
        i->data = j->data;
        j->data = swap;
      }
      j = j->next;
    }
    i = i->next;
  }
  return (lst);
}

/*
int main(int argc, char *argv[]) {
  t_list *head;
  t_list *node1 = malloc(sizeof(t_list));
  t_list *node2 = malloc(sizeof(t_list));
  t_list *node3 = malloc(sizeof(t_list));
  t_list *node4 = malloc(sizeof(t_list));

  node1->data = 9;
  node2->data = 5;
  node3->data = 11;
  node4->data = 3;

  head = node1;
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = NULL;

  head = sort_list(head, cmp);

  while (head && head->next) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("%d\n", head->data);
  return (0);
}
*/
