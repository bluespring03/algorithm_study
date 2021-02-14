//
//  실험용.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/04.
//

#include <iostream>
#include<string>
using namespace std;

int main(){
    
    int b[10];
    for(int i=0;i<3;i++) cin>>b[i];
    string a;
    //string a=to_string(n)
    
    for(int i=0;i<3;i++)
    a+=to_string(b[i]) ;
    
    
    
    cout<<a<<endl;
    
           return 0;
}
