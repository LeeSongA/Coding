#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main() {
	int N;
	cin >> N;

	queue<int> q;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		if (str == "push") {
			int data;
			cin >> data;
			q.push(data);
		}
		else if (str == "pop") {
			if (q.size() != 0) {
				cout << q.front() << endl; 
				q.pop();
			}
			else
				cout << -1 << endl;
		}
		else if (str == "size") {
			cout << q.size() << endl;
		}
		else if (str == "empty") {
			if (q.size() == 0)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (str == "front") {
			if (q.size() == 0)
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (str == "back") {
			if (q.size() == 0)
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}
	return 0;
}
