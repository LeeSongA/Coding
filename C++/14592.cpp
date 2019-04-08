#include <iostream>
#include <algorithm>

using namespace std;

struct str {
	int S, C, L, I;
};

bool cmp(str a, str b) {
	if (a.S != b.S)
		return a.S > b.S;
	else if (a.C != b.C)
		return a.C < b.C;
	else
		return a.L < b.L; 
}

str inp[3];

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &inp[i].S, &inp[i].C, &inp[i].L);
		inp[i].I = i + 1;
	}

	sort(inp, inp + N, cmp);
	printf("%d\n", inp[0].I);

	return 0;
}
