/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string c;
    int l=0;
    getline(cin,c);
    for (int i=0; i<c.length(); i++) {
        if (c[i]=='a') {
            cout<<i<<" ";
            l++;
        }
    }
    if (l==0) {
        cout<<"-1";
    }
    return 0;
}
