/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string e;
    int cnt=0;
    getline(cin,e);
    for (int i=0; i<e.length(); i++) {
        if(e[i]=='a'){
            cout<<'a';
            cnt++;
        }
    }
    if(cnt==0) {
        cout<<"-1";
    }
    return 0;
}
