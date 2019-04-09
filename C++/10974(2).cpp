#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	int N;
	cin >> N;
	vector<int> number(N);
	for (int num_cnt = 0; num_cnt < N; num_cnt++)
		number[num_cnt] = num_cnt + 1;
	
	do {
		for (int num_cnt = 0; num_cnt < N; num_cnt++)
			cout << number[num_cnt] << " ";
		cout << "\n";
	} while (next_permutation(number.begin(), number.end()));
	
	return 0;
}
