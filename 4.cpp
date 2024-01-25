/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string grades;
    char c;
    int cnt=0;
    int ctr=0;
    getline(cin,grades);
    for (int i=0; i<grades.length(); i++) {
        if (grades[i]=='2') {
            cnt++;
        }else if(grades[i]=='5') {
            ctr++;
        }
    }
    if(cnt>ctr) {
        c='2';
    }else if(ctr>cnt) {
        c='5';
    }else if (ctr==cnt) {
        c='=';
    }
    cout<<c;
    return 0;
}
