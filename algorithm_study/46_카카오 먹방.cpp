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
    int num, blackout=0,current=0; cin>>num;
    vector<int>n(num); for(int i=0;i<num;i++) cin>>n[i];
    cin>>blackout;
    
    while(blackout!=0){
        if(current>num)
            current=0;
        
        if(n[current]>0){
            n[current]--;
            current++;
            blackout--;}
        else {
            current++;
            blackout--;}
    }//정전 되기 전에 종료되는 것 포함 안 시킴.
    
    while(1){
        if(current>num)
            current=0;
        
        if(n[current]!=0){
            cout<<current+1;
            break;
        }
        else{
            cout<<"-1";
            break;}
    }
    
    return 0;
    
}

