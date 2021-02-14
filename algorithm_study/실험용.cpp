//
//  실험용.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/04.
//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    int a[10][10], i, j, sum, ave, min, res, tmp;
    
    for(i=1; i<=9; i++){
        sum=0;
        for(j=1; j<=9; j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
        
        ave=(sum/9.0)+0.5;
        
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
        cout<<ave<<" "<<res;
    }
    return 0;
}
