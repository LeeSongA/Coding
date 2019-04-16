#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int num_one, num_two;

	while (cin >> num_one >> num_two) {
		cout << num_one + num_two << endl;

		if (num_one == NULL)
			break;
	}
	return 0;
}
