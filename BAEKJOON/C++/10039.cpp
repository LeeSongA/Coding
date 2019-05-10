#include <iostream>

int main() {
	int jumsu;
	int sum = 0;

	for (int student = 0; student < 5; student++) {
		scanf("%d", &jumsu);

		if (jumsu < 40)
			sum += 40;
		else
			sum += jumsu;
	}

	printf("%d", sum / 5);

	return 0;
}
