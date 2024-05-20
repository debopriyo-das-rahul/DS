#include <bits/stdc++.h>
using namespace std;
struct Node {
  int value;
  struct Node *next;
};
int main() {
  struct Node *first;
  struct Node *second;
  struct Node *third;
  first = (Node *)malloc(sizeof(Node));
  second = (Node *)malloc(sizeof(Node));
  third = (Node *)malloc(sizeof(Node));
  first->value = 1;
  first->next = second;
  second->value = 69;
  second->next = third;
  third->value = 420;
  third->next = NULL;
  struct Node *Point = first;
  while (Point != NULL) {
    cout << Point->value << endl;
    Point = Point->next;
  }
  free(first);
  free(second);
  free(third);
}