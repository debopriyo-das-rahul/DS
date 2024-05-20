#include <bits/stdc++.h>
using namespace std;
struct Queue {
  int size;
  int front;
  int rear;
  int *Q;
};
void createQ(struct Queue *q, int size) {
  q->size = size;
  q->front = q->rear = -1;
  q->Q = (int *)malloc(q->size * sizeof(int));
}
void enQueue(struct Queue *q, int x) {
  if (q->rear == q->size - 1) {
    cout << "Overflow";
  } else {
    q->rear++;
    q->Q[q->rear] = x;
  }
}
int deQueue(struct Queue *q) {
  int x = -1;
  if (q->front == q->rear) {
    cout << "Underflow";
  } else {
    q->front++;
    x = q->Q[q->front];
  }
  return x;
}
int main() {
  struct Queue q;
  createQ(&q, 5);
  enQueue(&q, 1);
  enQueue(&q, 69);
  enQueue(&q, 69);
  enQueue(&q, 420);

  for (int i = q.front + 1; i <= q.rear; i++) {
    cout << q.Q[i] << endl;
  }
  cout << deQueue(&q) << endl;
  cout << deQueue(&q) << endl;
  cout << deQueue(&q) << endl;
  free(q.Q);
}