//
//  48_각 행 평균과 가장 가까운 값.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/14.
//

#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main(){
    int a[10][10];
    int i, j, sum, ave, min, res, tmp;
    
    for(i=0; i<9; i++){
        sum=0;
        for(j=0; j<9; j++){
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
        ave=(sum/9.0)+0.5;
        cout<<ave<<" ";
        min=2147000000;
        
        for(j=1; j<=9; j++){
            tmp=abs(a[i][j]-ave);
            if(tmp<min){
                min=tmp;
                res=a[i][j];
            }
            else if(tmp==min){
                if(a[i][j]>res) res=a[i][j];
            }
        }
        cout<<res;
    }
    
    return 0;
}
