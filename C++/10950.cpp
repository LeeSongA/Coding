#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int num_one, num_two;
		cin >> num_one >> num_two;

		cout << num_one + num_two << endl;
	}

	return 0;
}
