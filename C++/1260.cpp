#include<iostream>
#include <queue>

#define MAX 1003

using namespace std;

int matrix[MAX][MAX];
int visited[MAX];

void DFS(int N, int v) {
	cout << v << ' ';
	visited[v] = 1;
	for (int i = 1; i <= N; i++) {
		if (visited[i] == 1 || matrix[v][i] == 0)
			continue;
		DFS(N, i);
	}
}

void BFS(int N, int v) {
	queue<int> q;
	q.push(v);
	visited[v] = 0;
	while (!q.empty()) {
		v = q.front();
		cout << q.front() << ' ';
		q.pop();

		for (int i = 1; i <= N; i++) {
			if (visited[i] == 0 || matrix[v][i] == 0)
				continue;
			q.push(i);
			visited[i] = 0;
		}
	}
}

int main(int argc, char** argv) {
	int N, M, V;
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int vStart, vEnd;
		cin >> vStart >> vEnd;
		matrix[vStart][vEnd] = matrix[vEnd][vStart] = 1;
	}

	DFS(N, V);
	cout << "\n";
	BFS(N, V);

	return 0;
}
