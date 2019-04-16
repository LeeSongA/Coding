#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int testcase;
	cin >> testcase;
	
	for (int i = 0; i < testcase; i++) {
		int num_one, num_two;
		char comma;
		cin >> num_one >> comma >> num_two;
		cout << num_one + num_two << endl;
	}
	return 0;
}
