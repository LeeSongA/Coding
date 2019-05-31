#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    
    string hh = s.substr(0, 2);
    string mmss = s.substr(2, 6);
    string AMPM = s.substr(8, 2);

    if((AMPM == "PM") && (hh != "12")) {        
        hh = to_string(stoi(hh) + 12);
    }
    if((AMPM == "AM") && (hh == "12")) {
        hh = "00";
    }

    return hh + mmss;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}