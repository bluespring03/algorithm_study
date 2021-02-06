//
//  22_온도의 최댓값.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/06.
//

#include <iostream>
using namespace std;

int main(){
    int N, k,n[100000],i ; cin>>N>>k;
    int c[99999];
    
    for(i=0;i<N;i++) cin>>n[i];
    
    for(i=0;i<N-k+1;i++){
        for(int j=0; j<k;j++){
            c[i]+=n[i];
        }}
    
    for(i=0;i<N-k+1;i++)
    cout<<" "<<c[i];
    
    return 0;
}
