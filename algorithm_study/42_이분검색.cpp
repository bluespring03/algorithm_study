//
//  42_이분검색.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/14.
//

#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int tmp;
    
    tmp=*p;
    *p=*q;
    *q=tmp;
}

int main(){
    int N,M, n[1000000]; cin>>N>>M;
    for(int i=0;i<N;i++) cin>>n[i];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1; j++){
        if(n[j]>n[j+1]) swap(&n[j],&n[j+1]);
        }//버블 정렬 이용
            
    }
    int mid=N/2;
    while(true)
        if
        
    }
    return 0;
}
