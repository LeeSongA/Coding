#include <stdio.h>

int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a % b);
}

int main() {
	int n;
	int num[105];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 1; i < n; i++) {
		printf("%d/%d\n", num[0] / gcd(num[0], num[i]), num[i] / gcd(num[0], num[i]));
	}

	return 0;
}
