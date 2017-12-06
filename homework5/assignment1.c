#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char numStr[10][5] = { "영", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구" };
char scaleStr[4][5] = { "", "십", "백", "천" };
char unitStr[5][5] = { "", "만 ", "억 ", "조 ", "경 " };
//각 배열의 원소가 문자가 아닌 문자'열'임에 주의한다


void testcase(int n)
{
	//숫자를 입력받고 한 줄에 출력한다
	int count = 0;
	char *arr;

	arr = (char*)malloc(strlen(n) * sizeof(char));
	for (int i = 0; i<strlen(n); i++) {
		arr[i] = numStr[n % 10];
		n = n / 10;
		count++;
		if (count == 4);

	}
}

int main()
{
	int t;
	int caseIndex;
	int Num;
	scanf("%d", &t);
	for (caseIndex = 0; caseIndex<t; caseIndex++)
	{
		scanf("%d", &Num);
		testcase(Num);
	}

	return 0;
}