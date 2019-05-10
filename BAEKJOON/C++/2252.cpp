#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;
int N, M;
vector<int> indegree;
vector<vector<int>> graph;

int BFS() {
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (indegree[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		printf("%d ", now);
		int length = graph[now].size();

		for (int i = 0; i < length; i++) {
			int next = graph[now][i];
			indegree[next]--;

			if (indegree[next] == 0)
				q.push(next);
		}
	}
}

int main() {
	scanf("%d %d", &N, &M);
	indegree.resize(N + 1);
	graph.resize(N + 1);

	while (M--) {
		int u, v;
		scanf("%d %d", &u, &v);
		graph[u].push_back(v);
		indegree[v] += 1;
	}
	BFS();
	printf("\n");

	return 0;
}

