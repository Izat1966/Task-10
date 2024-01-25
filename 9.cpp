/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string c;
    getline(cin, c);
    c[0]=toupper(c[0]);
    for (int i = 2; i < c.length(); i++) {
        if(c[i-1]==' ' && c[i]!=' ') {
            c[i]=toupper(c[i]);
        }
    }

    cout <<c;
    return 0;
}
