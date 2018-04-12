#include <stdio.h>

long long gcd(int n, int m) {
	return m == 0 ? n : gcd(m, n % m);
}

long long lcm(int n, int m) {
	return (long long)n * m / gcd(n, m);
}

int main() {
	int t;
	int a[1005], b[1005];

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
		scanf("%d %d", &a[i], &b[i]);

	for (int i = 0; i < t; i++)
		printf("%lld\n", lcm(a[i], b[i]));

	return 0;
}
