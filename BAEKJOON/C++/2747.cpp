#include <iostream>

using namespace std;

int dp[45];
int fib(int n) {
	if (n <= 1)
		return n;
	else {
		if (dp[n] > 0) return dp[n];
		dp[n] = fib(n - 1) + fib(n - 2);
		return dp[n];
	}
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", fib(n));

	return 0;
}
