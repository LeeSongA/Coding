#include <stdio.h>
#include <algorithm>

using namespace std;

int dp[10000];
const int INF = 1e9;

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= k; i++)
		dp[i] = INF;

	while (n--) {
		int coin;
		scanf("%d", &coin);
		for (int i = coin; i <= k; i++) {
			dp[i] = min(dp[i], dp[i - coin] + 1);
		}
	}
	if (dp[k] != INF)
		printf("%d", dp[k]);
	else
		printf("-1");
	// printf("%d", dp[k] == INF ? -1 : dp[k]);
	return 0;
}
