#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int inp[1000005];

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &inp[i]);
	}

	sort(inp, inp + N, cmp);
	for (int i = 0; i < N; i++)
		printf("%d\n", inp[i]);

	return 0;
}
