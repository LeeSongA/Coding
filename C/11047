#include <stdio.h>

int main() {
	int n, k;
	int min = 0;
	int coin[11];
	scanf("%d %d", &n, &k);

	for (int i = n - 1; i >= 0; --i)
		scanf("%d", &coin[i]);

	for (int i = 0; i<n; i++) {
		if (k - coin[i] >= 0) {
			min++;
			k -= coin[i];
			i--;
		}
	}

	printf("%d", min);
	return 0;
}
