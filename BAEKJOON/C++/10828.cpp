#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	int N;
	cin >> N;

	stack<int> st;
	string str;

	for (int N_cnt = 0; N_cnt < N; N_cnt++) {
		cin >> str;

		if (str == "push") {
			int data;
			cin >> data;
			st.push(data);
		}
		else if (str == "pop") {
			if (!st.empty()) {
				cout << st.top() << endl;
				st.pop();
			}
			else
				cout << "-1" << endl;
		}
		else if (str == "size") {
			cout << st.size() << endl;
		}
		else if (str == "empty") {
			if (st.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (str == "top") {
			if (!st.empty())
				cout << st.top() << endl;
			else
				cout << "-1" << endl;
		}
	}
	return 0;
}
