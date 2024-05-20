#include <bits/stdc++.h>
using namespace std;
struct Queue {
  int size, front, rear;
  int *Q;
};
void createQ(struct Queue *q, int size) {
  q->size = size + 1;
  q->front = q->rear = 0;
  q->Q = (int *)malloc(q->size * sizeof(int));
}
void enQueue(struct Queue *q, int x) {
  if ((q->rear + 1) % q->size == q->front) {
    cout << "Overflow" << endl;
  } else {
    q->rear = (q->rear + 1) % q->size;
    q->Q[q->rear] = x;
  }
}
void deQueue(struct Queue *q) {
  if (q->front == q->rear) {
    cout << "Underflow" << endl;
  } else {
    q->front = (q->front + 1) % q->size;
    cout << q->Q[q->front] << endl;
  }
}
void printQ(struct Queue q) {
  int i = q.front + 1;
  do {
    cout << q.Q[i] << endl;
    i = (i + 1) % q.size;
  } while (i != (q.rear + 1) % q.size);
}
int main() {
  struct Queue q;
  createQ(&q, 5);
  enQueue(&q, 1);
  enQueue(&q, 2);
  enQueue(&q, 3);
  enQueue(&q, 4);
  enQueue(&q, 5);
  enQueue(&q, 6);
  printQ(q);
  deQueue(&q);
  free(q.Q);
}