#include <stdio.h>
#include <math.h>

int gcd(int n, int m) {
	return m == 0 ? n : gcd(m, n % m);
}

int lcm(int n, int m) {
	return (long long) n * m / gcd(n, m);
}

int main() {
	long long A, B;
	scanf("%lld%lld", &A, &B);

	long long a = A;
	long long b = B;
	
	if (B % A != 0)
		return 0;

	for (int i = A; i <= sqrt(A*B); i += A) {
		if (((A*B) % i) == 0) {
			if (a + b > i + A * B / i) {
				if (lcm(i, A * B / i) == B) {
					a = i;
					b = A * B / i;
				}
			}
		}
	}

	if (a > b) {
		long long temp = a;
		a = b;
		b = temp;
	}

	printf("%lld %lld", a, b);

	return 0;
}
