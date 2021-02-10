//
//  22_온도의 최댓값.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/06.
//

#include <iostream>
using namespace std;

int main(){
    int Date,k,date[100000],i ; cin>>Date>>k;
    int c[99999];
    
    for(i=0;i<Date;i++) cin>>date[i];
    
    for(i=0;i<Date-k+1;i++){
        for(int j=0;j<k;j++){
            c[i]+=date[j+i];
        }}
    
    int max=0;
    for(i=0;i<Date-k+1;i++){
        if(max<=c[i])
            max=c[i];
    }
    
    cout<<max<<endl;

    return 0;
}
