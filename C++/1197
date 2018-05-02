#include <iostream>
#include <algorithm>

using namespace std;

int parent[10004];

struct Edge {
	int a, b, c;
};

Edge inp[100005];

bool operator < (Edge &a, Edge &b) {
	return a.c < b.c;
}

int find (int cur) {
	if (cur == parent[cur])
		return cur;
	return parent[cur] = find(parent[cur]);
}

int merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b)
		return 0;
	parent[b] = a;
	return 1;
}

int main() {
	int V, E;
	int a, b, c;
	int ans = 0;
	int cnt = 0;
	scanf("%d %d", &V, &E);

	for (int i = 1; i <= V; i++)
		parent[i] = i;

	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &a, &b, &c);
		inp[i] = { a,b,c };
	}

	sort(inp, inp + E);

	for (int i = 0; i < E; i++) {
		if (merge(inp[i].a, inp[i].b)) {
			ans += inp[i].c;
			cnt++;
			if (cnt == V - 1)
				break;
		}
	}

	printf("%d", ans);
	return 0;
}
