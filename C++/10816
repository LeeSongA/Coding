#include <stdio.h>
#include <algorithm>

using namespace std;

int a[500005];
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &a[i]);
	
	sort(a + 1, a + 1 + N);

	int M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int target;
		scanf("%d", &target);			
		printf("%d ", upper_bound(a+1,a+1+N,target)-lower_bound(a + 1, a + 1 + N, target));
	}
	return 0;
}
