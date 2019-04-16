#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int num_one, num_two;
	
	while(1) { 
		cin >> num_one >> num_two;

		if (num_one == 0 && num_two == 0)
			break;

		cout << num_one + num_two << endl;
	}
	return 0;
}
