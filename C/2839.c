#include <stdio.h>

int main() {
	int N, num = 0;
	scanf("%d", &N);

	if (N % 5 == 0)
		num = N / 5;
	else if ((N % 5) % 3 == 0)
		num = N / 5 + (N % 5) / 3;	
	else if ((N/5) >= 1 && (N % 5) % 3 == 1)
		num = (N / 5) - 1 + (N % 5 + 5) / 3;
	else if ((N/5) >=2 && (N % 5) % 3 == 2)
		num = (N / 5) - 2 + (N % 5 + 10) / 3;
	else
		num = -1;

	printf("%d", num);

	return 0;
}
