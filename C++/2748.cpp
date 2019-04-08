#include <iostream>

using namespace std;

int long long dp[95];
int long long fib(int n) {
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

	printf("%lld", fib(n));

	return 0;
}
