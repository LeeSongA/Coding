#include<stdio.h>
#include<algorithm>

using namespace std;

int N, array_A[8], max_gap, gap;

int main(int argc, char** argv) {
	scanf("%d", &N);
	for (int cnt_N = 0; cnt_N < N; cnt_N++) 
		scanf("%d", array_A + cnt_N);
	
	sort(array_A, array_A + N);
	
	do {
		gap = 0;
		for (int i = 0; i < N - 1; i++) 
			gap += abs(array_A[i] - array_A[i + 1]);
		max_gap = max(max_gap, gap);
	} while (next_permutation(array_A, array_A + N));

	printf("%d\n", max_gap);

	return 0;
}
