#include <bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node *next;
} *first = NULL;
void create(int arr[], int n) {
  struct node *t, *last;
  first = (struct node *)malloc(sizeof(struct node));
  first->data = arr[0];
  first->next = NULL;
  last = first;
  for (int i = 1; i < n; i++) {
    t = (struct node *)malloc(sizeof(struct node));
    t->data = arr[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
int count(struct node *p) {
  int cnt = 0;
  while (p != NULL) {
    cnt++;
    p = p->next;
  }
  return cnt;
}
void insertion(struct node *p, int index, int x) {
  struct node *t;
  if (index < 0 || index > count(p)) {
    return;
  }
  t = (struct node *)malloc(sizeof(struct node));
  t->data = x;
  if (index == 0) {
    t->next = first;
    first = t;
  } else {
    for (int i = 0; i < index - 1; i++) {
      p = p->next;
    }
    t->next = p->next;
    p->next = t;
  }
}
int deletion(struct node *p, int index) {
  struct node *q = NULL;
  int x = -1;
  if (index < 1 || index > count(p)) {
    return -1;
  }
  if (index == 1) {
    q = first;
    x = first->data;
    first = first->next;
    free(q);
    return x;
  } else {
    for (int i = 0; i < index - 1; i++) {
      q = p;
      p = p->next;
    }
    q->next = p->next;
    x = p->data;
    free(p);
    return x;
  }
}
void traverse(struct node *p) {
  while (p != NULL) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << endl;
}
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  create(arr, 5);
  insertion(first, 4, 5);
  traverse(first);
  cout << deletion(first, 2) << endl;
  traverse(first);
}