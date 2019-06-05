#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i_variable;
    double d_variable;
    string s_variable;

    // Read and save an integer, double, and String to your variables.
    cin >> i_variable;
    cin >> d_variable;
    cin.ignore();
    getline(cin, s_variable);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + i_variable << endl;
 
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + d_variable << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + s_variable << endl;

    return 0;
}