#include <bits/stdc++.h>
using namespace std;
const int nodes = 6;
int adjMat[nodes][nodes] = {0};
void addEdge(int u, int v) {
  adjMat[u][v] = 1;
  adjMat[v][u] = 1;
}
void bfs(int i) {
  queue<int> q;
  int visited[nodes] = {0};
  cout << "i=" << i << endl;
  visited[i] = 1;
  q.push(i);
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    cout << "Visited: " << u << endl;
    for (int v = 0; v < nodes; v++) {
      if (adjMat[u][v] == 1 && !visited[v]) {
        cout << "v=" << v << endl;
        visited[v] = 1;
        q.push(v);
      }
    }
  }
}
int main() {
  addEdge(0, 1);
  addEdge(0, 2);
  addEdge(1, 3);
  addEdge(1, 4);
  addEdge(2, 4);
  addEdge(3, 5);
  addEdge(4, 5);
  int startNode = 0;
  bfs(startNode);
}