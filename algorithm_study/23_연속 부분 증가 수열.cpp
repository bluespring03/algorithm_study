//
//  23_연속 부분 증가 수열.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/07.
//

#include <iostream>
#include<vector>
using namespace std;

int main(){
    int num; cin>>num;
    int count=1, max=0;
    
    vector<int> n(num);
    for(int i=0;i<num;i++) cin>>n[i];
    
    for(int i=0;i<num;i++){
        count++;
        if(n[i]<=n[i+1]) {continue;}
        max=count;
        count=1;
        }
            
    
    cout<<count<<endl;
    
    return 0;
}
