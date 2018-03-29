#include <iostream>
#include <algorithm>

using namespace std;

struct str {
	int age, I;
	char name[102];
};

bool cmp(str a, str b) {
	if (a.age != b.age)
		return a.age < b.age;
	else
		return a.I < b.I; 
}

str inp[100000];
int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %s", &inp[i].age, inp[i].name);
		inp[i].I = i + 1;
	}

	sort(inp, inp + N, cmp);
	for (int i = 0; i < N; i++) {
		printf("%d %s\n", inp[i].age, inp[i].name);
	}

	return 0;
}
