#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	char input[105];

	scanf("%d", &n);
	scanf("%s", input);

	for (int i = 0; i < n; i++) {
		sum += input[i] - '0';
	}

	printf("%d\n", sum);

	return 0;
}
