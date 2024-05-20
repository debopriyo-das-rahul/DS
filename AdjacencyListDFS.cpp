#include <bits/stdc++.h>
using namespace std;
int path[1000], visit[1000];
vector<vector<int>> adjL(1000);
void dfs(int u) {
  visit[u] = 1;
  for (int i = 0; i < adjL[u].size(); i++) {
    int node = adjL[u][i];
    if (visit[node] == 0) {
      path[node] = path[u] + 1;
      dfs(node);
    }
  }
}
void addEdge(int u, int v) {
  adjL[u].push_back(v);
  adjL[v].push_back(u);
}
int main() {
  int n, e;
  cout << "Enter number of nodes and edges: ";
  cin >> n >> e;
  cout << "Enter source node and destination node for each edge:" << endl;
  for (int i = 0; i < e; i++) {
    int src, dist;
    cin >> src >> dist;
    addEdge(src, dist);
  }
  int start, target;
  cout << "Enter starting node and target node: ";
  cin >> start >> target;
  dfs(start);
  cout << "Distance from node " << start << " to node " << target << ": "
       << path[target] << endl;
}
