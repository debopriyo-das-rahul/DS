#include <bits/stdc++.h>
using namespace std;
int graph[11][11];
int visited[11];
void edge(int start, int target) { graph[start][target] = 1; }
void DFS(int start) {
  if (visited[start] == 0) {
    cout << start << endl;
    visited[start] = 1;
    for (int i = 1; i < 11; i++) {
      if (graph[start][i] == 1 && visited[i] == 0) {
        DFS(i);
      }
    }
  }
}
int main() {
  edge(0, 1);
  edge(0, 10);
  edge(2, 1);
  edge(4, 5);
  edge(6, 10);
  edge(8, 9);
  edge(3, 6);
  edge(9, 4);
  edge(10, 3);
  DFS(10);
}