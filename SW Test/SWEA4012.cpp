#include<iostream>
#include<cmath>

#define forA 1
#define forB 2

using namespace std;

int N;
double minimum;
int food[20][20];
int selected[20];
int divided_N;

void calc() {
	int food_a[10] = { 0, }, food_b[10] = { 0, };
	int count_a = 0, count_b = 0;
	int cal_a = 0, cal_b = 0;

	for (int i = 1; i <= N; i++) {
		if (selected[i] == forA)
			food_a[++count_a] = i;
		else if (selected[i] == forB)
			food_b[++count_b] = i;
	}
	if (count_a != divided_N || count_b != divided_N)
		return;

	int x, y;
	for (int i = 1; i < divided_N; i++) {
		for (int j = i + 1; j <= divided_N; j++) {
			x = food_a[i], y = food_a[j];
			cal_a += food[x][y] + food[y][x];
		}
	}
	for (int i = 1; i < divided_N; i++) {
		for (int j = i + 1; j <= divided_N; j++) {
			x = food_b[i], y = food_b[j];
			cal_b += food[x][y] + food[y][x];
		}
	}

	int tmp = abs(cal_a - cal_b);
	if (minimum > tmp)
		minimum = tmp;
}



void DFS(int num, int count_a, int count_b) {
	if (num > N) {
		calc();
		return;
	}
	if (count_a > 0) {
		selected[num] = forA;
		DFS(num + 1, count_a - 1, count_b);
	}
	if (count_b > 0) {
		selected[num] = forB;
		DFS(num + 1, count_a, count_b - 1);
	}
}

int main(int argc, char** argv) {
	int T;
	cin >> T;

	for (int TCcnt = 1; TCcnt <= T; TCcnt++) {
		cin >> N;
		minimum = 1e9;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				cin >> food[i][j];
			}
		}
		divided_N = N / 2;
		DFS(1, divided_N, divided_N);
		cout << "#" << TCcnt << " " << minimum << endl;
		minimum = (1 << 30);
	}
	return 0;
}
