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
    char toRemove='a';

    getline(cin, c);

    for (int i = 0; i < c.length(); i++) {
        if (c[i]==toRemove) {
            c.erase(i,1);
            i--;
        }
    }

    cout <<c;
    return 0;
}
