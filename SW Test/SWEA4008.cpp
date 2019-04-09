#include <iostream>
#include <climits>

#define OP_ADD    0
#define OP_SUB    1
#define OP_MUL    2
#define OP_DIV    3

using namespace std;

int N, maxResult, minResult;
int opCnt[4], nums[12];

void calcAnswer(int num, int idx) {
	if (idx == N) {
		if (minResult > num)
			minResult = num;
		if (maxResult < num)
			maxResult = num;
	}
	else {
		if (opCnt[OP_ADD] > 0) {
			opCnt[OP_ADD]--;
			calcAnswer(num + nums[idx], idx + 1);
			opCnt[OP_ADD]++;
		}

		if (opCnt[OP_SUB] > 0) {
			opCnt[OP_SUB]--;
			calcAnswer(num - nums[idx], idx + 1);
			opCnt[OP_SUB]++;
		}

		if (opCnt[OP_MUL] > 0) {
			opCnt[OP_MUL]--;
			calcAnswer(num * nums[idx], idx + 1);
			opCnt[OP_MUL]++;
		}

		if (opCnt[OP_DIV] > 0) {
			opCnt[OP_DIV]--;
			calcAnswer(num / nums[idx], idx + 1);
			opCnt[OP_DIV]++;
		}
	}
}

int main(int argc, char** argv) {
	int T;
	cin >> T;

	for (int t_case = 1; t_case <= T; t_case++) {
		cin >> N;
		cin >> opCnt[0] >> opCnt[1] >> opCnt[2] >> opCnt[3];

		for (int i = 0; i < N; i++)
			cin >> nums[i];

		maxResult = INT_MIN;
		minResult = INT_MAX;

		calcAnswer(nums[0], 1);

		cout << "#" << t_case << " " << maxResult - minResult << endl;
	}

	return 0;
}
