#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int L, C;
char cText[16];

void answer(int index, int cnt, int mo, int ja, string s) {
	if (cnt == L) {
		if (mo >= 1 && ja >= 2)
			cout << s << "\n";
		return;
	}
	if (index == C)
		return;
	if (cText[index] == 'a' || cText[index] == 'e' || cText[index] == 'i' || cText[index] == 'o' || cText[index] == 'u')
		answer(index + 1, cnt + 1, mo + 1, ja, s + cText[index]);
	else
		answer(index + 1, cnt+1, mo, ja+1, s + cText[index]);
	answer(index + 1, cnt, mo, ja, s);
}

int main() {
	cin >> L >> C;
	
	for (int i = 0; i < C; i++) {
		cin >> cText[i];
	}

	sort(cText, cText + C);
	answer(0, 0, 0, 0, "");
	return 0;
}
