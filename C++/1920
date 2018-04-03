#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int N, a[100005];
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &a[i]);
	
	sort(a + 1, a + 1 + N);

	int M, target;
	scanf("%d", &M);
	while (M--) {
		scanf("%d", &target);
		int l = 0, r = N + 1, mid;
		while (l + 1 < r) {
			mid = (l + r) / 2;
			if (a[mid] >= target)
				r = mid;
			else
				l = mid;
		}
		printf("%d\n", a[r] == target);
	}
}
