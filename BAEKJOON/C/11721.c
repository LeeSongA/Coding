#include <stdio.h>
#include <string.h>

int main() {
	char input[105];

	scanf("%s", input);

	for (int i = 0; i < strlen(input); i++) {
		printf("%c", input[i]);
		if(i % 10 == 9)
			printf("\n");
	}
	return 0;
}
