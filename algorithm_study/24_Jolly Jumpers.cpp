//
//  24_Jolly Jumpers.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/08.
//

#include <stdio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;

int func_compare(const void * first, const void * second)
{
    if (*(int*)first > *(int *)second)
        return 1;
    else if (*(int*)first < *(int *)second)
        return -1;
    else
        return 0;
}

int main(){
    int num; cin>>num;
    int n[100],seq[99], i;
    
    for(i=0;i<num;i++){
        cin>>n[i];
    }
    
    for(i=0;i<num-1;i++){
        seq[i]=abs(n[i]-n[i+1]);
    }
    
    //qsort 인터넷 참고
    int arrsize;
    arrsize = sizeof(seq) / sizeof(int);
    qsort((int *)seq, arrsize, sizeof(int), func_compare);

    for(i=0;i<num-1;i++){
        
            cout<<seq[i];
    
    }
    return 0;
    
}



    

