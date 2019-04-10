#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	while (1) {
		int K;
		scanf("%d", &K);

		if (K == 0)
			break;

		vector<int> s;

		for (int i = 0; i < K; i++) {
			int num;
			scanf("%d", &num);
			s.push_back(num);
		}

		vector<int> index;

		for (int i = 0; i < 6; i++) {
			index.push_back(0);
		}

		for (int i = 0; i < s.size() - 6; i++) {
			index.push_back(1);
		}

		sort(index.begin(), index.end());

		do {
			for (int i = 0; i < index.size(); i++) {
				if (index[i] == 0) {
					printf("%d ", s[i]);
				}
			}
			printf("\n");
		} while (next_permutation(index.begin(), index.end()));
		printf("\n");
	}

	return 0;
}
