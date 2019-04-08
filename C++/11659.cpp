#include <iostream>

using namespace std;

int inp[100005];
int psum[100005];

int main() {
	int N, M, x;
	scanf("%d %d", &N, &M);
	
	for (int i = 1; i <= N; i++) {
		scanf("%d", &inp[i]);
		psum[i] = psum[i - 1] + inp[i];
	}
	
	while (M--) {
		int l, r;
		scanf("%d %d", &l, &r);
		printf("%d\n", psum[r] - psum[l - 1]);
	}
	
	return 0;
}
