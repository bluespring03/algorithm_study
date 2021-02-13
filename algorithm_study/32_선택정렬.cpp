//
//  32_선택정렬.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/13.
//

//32_선택정렬
#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int tmp;
    
    tmp=*p;
    *p=*q;
    *q=tmp;
}

int main(){
    int N,n[100], min; cin>>N;
    for(int i=0;i<N;i++) cin>>n[i];
    
    for(int i=0;i<N-1;i++){
        min=n[i+1];
        for(int j=i+1; j<N; j++){
            if(min>=n[j]) min=n[j];
            }
        if (n[i]>min)
            swap(&n[i],&min);
        
        for(int i=0;i<N;i++) cout<<n[i]<<" ";//확인용-왜 틀리는지 모르겠어요
        cout<<"\n";
    }
    
    for(int i=0;i<N;i++) cout<<n[i]<<" ";
    return 0;
}

