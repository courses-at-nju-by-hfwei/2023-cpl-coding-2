//
// Created by hfwei on 2023/12/29.
//

// macro (宏)
// header guard
#ifndef INC_2023_CPL_CODING_2_13_LINKED_LIST_LL_LL_H_
#define INC_2023_CPL_CODING_2_13_LINKED_LIST_LL_LL_H_

// TODO: adding code here

#include <stdbool.h>
// (1) define data type: circular singly linked list
typedef struct node {
  int val;
  struct node *next;
} Node;

typedef struct list {
  Node *head;
  Node *tail;
} LinkedList;

// (2) functions on linked list (declarations)
void Init(LinkedList *list);
void Free(LinkedList *list);

bool IsEmpty(const LinkedList *list);
bool IsSingleton(const LinkedList *list);

int GetHeadVal(const LinkedList *list);

void Print(const LinkedList *list);

void Append(LinkedList *list, int val);
void Delete(LinkedList *list, Node *prev);
void Insert(LinkedList *list, Node *prev, int val);
Node *Search(LinkedList *list, int val);

#endif //INC_2023_CPL_CODING_2_13_LINKED_LIST_LL_LL_H_