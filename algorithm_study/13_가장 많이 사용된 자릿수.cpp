//FIXME
//  13_가장 많이 사용된 자릿수.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/05.
//

#include <iostream>
#include<string>
using namespace std;

int main(){
    int n; cin>>n;
    int cnt[10]={0};
    
    while(n>9){
        
        cnt[n%10]++;
        n=n/10;
    }
    cnt[n]++;
    
    for (int i=0; i<10; i++) cout<<cnt[i]<<" ";
        
    
    return 0;
}

