#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << setw(n - i);

		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = n-1; i >= 1; i--) {
		cout << setw(n - i + 1);

		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
