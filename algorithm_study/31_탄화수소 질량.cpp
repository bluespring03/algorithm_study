//
//  31_탄화수소 질량.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/13.
//

#include <iostream>
using namespace std;
#include<string>

int main(){
    string hc; cin>>hc;
    int length=hc.length();
    int cnt=0,cg=0,hg=0,sum;
    
   // int a=stoi(hc.substr(0,g));
    
    if(hc[1]=='H')
        sum=12+stoi(hc.substr(2,length));
    else{
        for(int i=1;hc[i]!='H';i++){
            cnt++;
        }
        
    }
    
    return 0;
}
