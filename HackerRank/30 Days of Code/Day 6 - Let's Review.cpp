#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    string S;

    for(int i = 0; i < T; i++) {
        cin >> S;
        for (int j = 0; j < S.length(); j++) {
            if (j % 2 == 0)
                cout << S[j];
        }
        cout << " ";
        for(int j = 0; j < S.length(); j++) {
            if(j % 2 == 1)
                cout << S[j];
        }
        cout << endl;
    }   
	
    return 0;
}
