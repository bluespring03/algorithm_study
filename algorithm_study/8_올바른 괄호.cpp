//
//  8_올바른 괄호.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/03.
//

#include <iostream>
using namespace std;
#include <string>

int main(){
    string a; cin>>a;
    int c=0;
    
    for(int i=0; a[i]!='\0'; i++)
        c++;

    if(a[c-1]==')'){
        if(a[c-2]=='(')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;}
    else
        cout<<"NO"<<endl;
    
    return 0;
}
