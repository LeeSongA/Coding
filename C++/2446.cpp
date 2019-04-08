#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = n; i > 1; i--) {
		cout << setw(n - i + 1);
		for (int j = 1; j <= i * 2 - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		cout << setw(n - i + 1);
		for (int j = 1; j <= i * 2 - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
    
    return 0;
}
