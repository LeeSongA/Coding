#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << setw(2*(n - i)+1);
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n-1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << setw(2 * (n - i)+1);
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
  return 0;
}
