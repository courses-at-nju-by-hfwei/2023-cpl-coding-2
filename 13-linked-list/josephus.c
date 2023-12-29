//
// Created by hfwei on 2023/12/20.
//

#include <stdio.h>
#include "ll/ll.h"
#include <assert.h>

#define NUM 12

void SitAroundCircle(LinkedList *list, int num);
void KillUntilOne(LinkedList *list);
int GetSurvivor(LinkedList *list);

int main(void) {
  printf("I hate the Josephus game!\n");

  LinkedList list;
  Init(&list);

  SitAroundCircle(&list, NUM);
  Print(&list);

  KillUntilOne(&list);
  int survivor = GetSurvivor(&list);
  printf("%d : %d\n", NUM, survivor);

  return 0;
}

void SitAroundCircle(LinkedList *list, int num) {
  for (int i = 1; i <= num; ++i) {
    Append(list, i);
  }
}

void KillUntilOne(LinkedList *list) {
  Node *node = list->head;

  while (!IsSingleton(list)) {
    Delete(list, node);
    node = node->next;
  }
}

int GetSurvivor(LinkedList *list) {
  return GetHeadVal(list);
}