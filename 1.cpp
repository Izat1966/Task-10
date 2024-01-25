/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char c,d,e;
    cin>>c;
    d=c-1;
    e=c+1;
    if (c=='a' || c=='A') {
        d='0';
    }else if (c=='z'||c=='Z' ){
        e='0';
    }
    cout<<d<<" "<<e;

    return 0;
}
