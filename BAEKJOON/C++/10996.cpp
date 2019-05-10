#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;

	if (n == 1)
		cout << setw(n) << "*" << endl;
	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n-(n/2); j++) {
				cout << "*" << setw(2);
			}
			cout << endl;

			for (int j = 1; j <= n-(n/2+n%2); j++) {
				cout << setw(2) << "*";
			}
			cout << endl;
		}
	}
	return 0;
}
