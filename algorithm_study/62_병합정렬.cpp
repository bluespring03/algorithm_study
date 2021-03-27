//
//  62_병합정렬.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/27.
//

#include <iostream>
using namespace std;
#include<vector>

    

void devide(int lt, int rt){
    int mid;
    if(lt<rt){
        mid=(lt+rt)/2;
        devide(lt, mid);
        devide(mid+1,rt);}
}

void sortMerge(int n){
    
}

int main(){
    int num; cin>>num;
    vector<int>n(num); for(int i=0;i<num;i++) cin>>n[i];
    devide(n[0],n[num]);
    
}
