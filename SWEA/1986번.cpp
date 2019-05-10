#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i=1; i<=t; i++) {
    	int n;
        int num = 0;
        cin >> n;
        for(int j=1; j<=n; j++) {
            if(j%2 == 0)
                num -= j;
            else
                num += j;
        }
        cout << '#' << i << ' ' << num << endl;
    }
    return 0;
}
