#include <iostream>

using namespace std;

int N;
int numbers[10];
int selected[10];

void answer(int num, int idx) {
	numbers[idx] = num;

	if (idx == N) {
		for (int i = 1; i <= N; i++) {
			cout << numbers[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (selected[i])
			continue;

		selected[i] = 1;
		answer(i, idx + 1);
		selected[i] = 0;
	}
}

int main(int argc, char** argv) {
	cin >> N;
	for (int num_cnt = 1; num_cnt <= N; num_cnt++) {
		selected[num_cnt] = 1;
		answer(num_cnt, 1);
		selected[num_cnt] = 0;
	}
	return 0;
}
