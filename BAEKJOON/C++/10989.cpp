#include <iostream>
#include <algorithm>

using namespace std;

int cnt[10005];

int main() {
	int N;
	int inp;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &inp);
		cnt[inp]++;
	}

	for (int i = 1; i <= 10000; i++) {
		while (cnt[i]--) {
			printf("%d\n", i);
		}
	}
  
	return 0;
}
