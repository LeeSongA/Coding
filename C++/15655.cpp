#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	int N, M;
	cin >> N >> M;

	vector<int> num;
	for (int i = 0; i < N; i++) {
		int number;
		cin >> number;
		num.push_back(number);
	}

	sort(num.begin(), num.end());

	vector<int> index;
	for (int i = 0; i < M; i++) {
		index.push_back(0);
	}
	for (int i = 0; i < N - M; i++) {
		index.push_back(1);
	}

	do {
		for (int i = 0; i < num.size(); i++) {
			if(index[i] == 0)
				cout << num[i] << ' ';
		}
		cout << "\n";
	} while (next_permutation(index.begin(), index.end()));

	return 0;
}
