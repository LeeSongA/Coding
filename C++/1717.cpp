#include <iostream>

using namespace std;

int parent[1000006];

int find(int cur) {
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
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		parent[i] = i;
	}

	while(M--) {
		int n, u, v;
		scanf("%d %d %d", &n, &u, &v);
		if (n == 0)
			merge(u, v);
		else if (n == 1) {
			if (find(u) == find(v))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
