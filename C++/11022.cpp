#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int testcase;
	cin >> testcase;
	
	for (int i = 1; i <= testcase; i++) {
		int num_one, num_two;
		cin >> num_one >> num_two;
		cout << "Case #" << i << ": " << num_one << " + " << num_two << " = " <<num_one + num_two << endl;
	}
  
	return 0;
}
