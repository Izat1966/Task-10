/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int main() {
    string c;
    int digitCount = 0;

    getline(cin, c);

    for (int i = 0; i < c.length(); i++) {
        if (isdigit(c[i])) {
            digitCount++;
        }
    }

    cout <<  digitCount <<endl;
    return 0;
}

