#include <iostream>

using namespace std;

int parent[1003];

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
		int u, v;
		scanf("%d %d", &u, &v);
		merge(u, v);
	}
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (parent[i] == i)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
