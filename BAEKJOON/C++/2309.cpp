#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> H;

	for (int i = 0; i < 9; i++) {
		int height;
		scanf("%d", &height);
		H.push_back(height);
	}

	sort(H.begin(), H.end());

	vector<int> index;

	for (int i = 0; i < 7; i++) {
		index.push_back(1);
	}

	for (int i = 0; i < 2; i++) {
		index.push_back(0);
	}

	sort(index.begin(), index.end());

	do {
		int hap = 0;
		for (int i = 0; i < index.size(); i++) {
			if (index[i] == 1) {
				hap += H[i];
			}
		}
		if (hap == 100) {
			for (int i = 0; i < index.size(); i++) {
				if (index[i] == 1) {
					printf("%d\n", H[i]);
				}
			}
			break;
		}
	} while (next_permutation(index.begin(), index.end()));

	return 0;
}
