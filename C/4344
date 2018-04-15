#include <stdio.h>

int main() {
	int c, n;
	int jum[1000];
	scanf("%d", &c);

	for(int i=0; i<c; i++) {
		scanf("%d", &n);

		int sum = 0;
		double avg;
		for (int j = 0; j < n; j++) {
			scanf("%d", &jum[j]);
			sum += jum[j];
		}
		avg = (double)sum / n;
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (avg < jum[j])
				count++;
		}

		printf("%.3f%%\n", (double)count * 100 / n);
	}
  
	return 0;
}
