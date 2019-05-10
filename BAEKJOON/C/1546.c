#include <stdio.h>

int main() {
	int n;
	float max = 0;
	float jumsu[1000];
	float sum = 0;

	scanf("%d", &n);
	for (int i=0; i<n; i++)
		scanf("%f", &jumsu[i]);

	for (int i=0; i<n; i++) {
		if (max < jumsu[i])
			max = jumsu[i];
	}

	for (int i=0; i<n; i++) {
		sum += jumsu[i] / max * 100.0;
	}
	printf("%.2f", sum / n);
	return 0;
}
