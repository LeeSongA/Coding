#include <iostream>
#include <algorithm>

using namespace std;

int parent[1003];

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
	int N, M;
	int a, b, c;
	int ans = 0;
	int cnt = 0;
	scanf("%d", &N);
	scanf("%d", &M);

	for (int i = 1; i <= N; i++)
		parent[i] = i;

	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &a, &b, &c);
		inp[i] = { a,b,c };
	}

	sort(inp, inp + M);

	for (int i = 0; i < M; i++) {
		if (merge(inp[i].a, inp[i].b)) {
			ans += inp[i].c;
			cnt++;
			if (cnt == N - 1)
				break;
		}
	}

	printf("%d", ans);
	return 0;
}
