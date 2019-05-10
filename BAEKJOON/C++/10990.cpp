#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int n;
	int space = 1;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == 1)
			cout << setw(n) << "*" << endl;
		else {
			cout << setw(n - i + 1) << "*";
			for (int j = 1; j < i; j++) {
				space = i + j;
			}
			cout << setw(space-1) << "*" << endl;
		}
	}
	return 0;
}
