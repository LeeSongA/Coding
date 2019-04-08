#include <stdio.h>

int main() {
	int n, m;
	int cnt = 0;
	scanf("%d", &n);

	m = n;
	while (1) {
		n = (n % 10 * 10) + (n / 10 + n % 10) % 10;
		cnt++;
		if (m == n)
			break;
	}

	printf("%d\n", cnt);

	return 0;
}
