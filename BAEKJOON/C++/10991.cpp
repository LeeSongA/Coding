#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i == 1)
			cout << setw(n) << "*" << endl;
		else {
			cout << setw(n - i + 1) << "*";
			for (int j = 1; j < i; j++) {
				cout << setw(2) << "*";
			}
			cout << endl;
		}
	}
	return 0;
}
