#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int minimum = 1e9;

void cal(int N, vector<vector<int>> s, vector<int> member) {
	vector<int> startT;
	vector<int> linkT;
	int startScore = 0;
	int linkScore = 0;

	for (int i = 0; i < N; i++) {
		if (member[i] == 1) {
			startT.push_back(i);
		}
		else {
			linkT.push_back(i);
		}
	}
	for (int i = 0; i < N / 2; i++) {
		for (int j = i + 1; j < N / 2; j++) {
			startScore += s[startT[i]][startT[j]] + s[startT[j]][startT[i]];
		}
	}
	for (int i = 0; i < N / 2; i++) {
		for (int j = i + 1; j < N / 2; j++) {
			linkScore += s[linkT[i]][linkT[j]] + s[linkT[j]][linkT[i]];
		}
	}
	int difference = abs(startScore - linkScore);

	if (minimum > difference) {
		minimum = difference;
	}
}

int main(int argc, char** args) {
	int N;
	cin >> N;

	vector<vector<int> > s(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> s[i][j];
		}
	}

	vector<int> member(N);
	for (int i = 0; i < N; i++) {
		if (i < N / 2)
			member[i] = 0;
		else
			member[i] = 1;
	}

	do {
		cal(N, s, member);
	} while (next_permutation(member.begin(), member.end()));

	cout << minimum << endl;

	return 0;
}
