#include <stdio.h>

long long gcd(int n, int m) {
	return m == 0 ? n : gcd(m, n % m);
}

long long lcm(int n, int m) {
	return (long long)n * m / gcd(n, m);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%lld", lcm(a, b));

	return 0;
}
