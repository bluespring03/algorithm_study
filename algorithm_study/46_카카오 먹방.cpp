//
//  46_카카오 먹방.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/16.
//

#include <iostream>
#include<vector>
using namespace std;

int main(){
    int num,k, time=0; cin>>num;
    vector<int>n(num); for(int i=0;i<num;i++) cin>>n[i];
    cin>>k;
    
    for(int i=0;i<k;i++){
        if(n[i]>0){
            n[i]--;}
    }
    
}

