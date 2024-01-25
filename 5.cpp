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
    int f=-1;
    int l=-1;
    getline(cin,c);
    for (int i=0; i<c.length(); i++) {
        if (c[i]==' ') {
            l=i;
            if(f==-1) f=i;
        }
    }
    if(f==-1) {
        cout<<-1;
    }else {
        cout<<f<<" "<<l;
    }
    return 0;
}
