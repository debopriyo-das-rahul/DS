#include <bits/stdc++.h>
using namespace std;
struct Stack {
  int size;
  int top;
  int *S;
};
void createStk(struct Stack *stk, int size) {
  stk->top = -1;
  stk->size = size;
  stk->S = (int *)malloc(stk->size * sizeof(int));
}
void push(struct Stack *stk, int x) {
  if (stk->top == stk->size - 1) {
    cout << "Overflow" << endl;
  } else {
    stk->top++;
    stk->S[stk->top] = x;
  }
}
int pop(struct Stack *stk) {
  if (stk->top == -1) {
    cout << "Underflow" << endl;
  } else {
    return stk->S[stk->top--];
  }
}
int peek(struct Stack *stk) {
  if (stk->top == -1) {
    cout << "Stack is empty" << endl;
  } else {
    return stk->S[stk->top];
  }
}
void printStk(struct Stack stk) {
  for (int i = stk.top; i >= 0; i--) {
    cout << stk.S[i] << endl;
  }
}
int main() {
  struct Stack stk;
  createStk(&stk, 5);
  push(&stk, 69);
  push(&stk, 420);
  push(&stk, 44);
  push(&stk, 6669);
  push(&stk, 6999);
  push(&stk, 600);
  printStk(stk);
  cout << pop(&stk) << endl;
  cout << pop(&stk) << endl;
  cout << peek(&stk) << endl;
  free(stk.S);
}