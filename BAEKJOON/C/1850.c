#include <stdio.h>

long long gcd(long long n, long long m) {
	return m == 0 ? n : gcd(m, n % m);
}

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);

	for (int i = 0; i < gcd(a, b); i++) {
		printf("1");
	}
	printf("\n");

	return 0;
}
