//FIX ME//
//  4_나이 차이.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/02.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n, M=0, b[100], r=0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    
    for(int i=0; i<n; i++){
        r = abs( b[i]-b[i+1] );
        if(r>M)
            M=r;
        
    }
    
    cout<<M<<endl;
    
    return 0;
}
