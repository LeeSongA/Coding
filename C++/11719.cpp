#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string memo;

	while (getline(cin, memo)) {
		cout << memo << endl;
	}
  
	return 0;
}
