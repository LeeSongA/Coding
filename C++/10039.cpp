#include <iostream>

int main() {
	int jumsu;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &jumsu);

		if (jumsu < 40)
			sum += 40;
		else
			sum += jumsu;
	}

	printf("%d", sum / 5);

	return 0;
}
