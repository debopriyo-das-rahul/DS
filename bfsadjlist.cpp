#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int numNodes = 6;
vector<vector<int>> adjList(numNodes);
void addEdge(int u, int v) {
  adjList[u].push_back(v);
  adjList[v].push_back(u);
}
void bfs(int startNode) {
  vector<bool> visited(numNodes, false);
  queue<int> q;
  visited[startNode] = true;
  q.push(startNode);

  while (!q.empty()) {
    int currentNode = q.front();
    q.pop();
    cout << "Visited: " << currentNode << endl;
    for (int neighbor : adjList[currentNode]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        q.push(neighbor);
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

  return 0;
}
