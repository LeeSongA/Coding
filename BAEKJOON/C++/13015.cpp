#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "*";
	}
	cout << setw(2 * (n-1));
	for (int i = 1; i <= n; i++) {
		cout << "*";
	}
	cout << endl;
	for (int i = 1; i <= n - 2; i++) {
		cout << setw(i + 1) << "*" << setw(n - 1) << "*" << setw(2 * (n - i - 1)) << "*" << setw(n - 1) << "*" << endl;
	}
	cout << setw(n) << "*" << setw(n - 1) << "*" << setw(n - 1) << "*" << endl;
	for (int i = n-2; i >= 1; i--) {
		cout << setw(i + 1) << "*" << setw(n - 1) << "*" << setw(2 * (n - i - 1)) << "*" << setw(n - 1) << "*" << endl;
	}
	for (int i = 1; i <= n; i++) {
		cout << "*";
	}
	for (int i = 1; i <= n; i++) {
		cout << setw(2);
	}
	cout << setw(2 * (n-1));
	for (int i = 1; i <= n; i++) {
		cout << "*";
	}
	cout << endl;

	return 0;
}
