//
//  28_N!에서 0의 개수.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/11.
//

#include <iostream>
using namespace std;

long fact(int n){
    if(n==0)
        return 1L;
    else
        return n*fact(n-1);
    }

int main(){
    int n; cin>>n;
    n=fact(n);
    
    int cnt1=0, cnt2=0;
    
    for(int i=0; n!=0;i++){
        if(n%10==0)
            cnt1++;
    }
    
   
    
    return 0;
}
