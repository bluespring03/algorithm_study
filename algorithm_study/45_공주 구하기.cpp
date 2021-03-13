//또 모르겠디
//  45_공주 구하기.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/14.
//

//45
#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n, k, p=0, bp=0, c=0; //p=position, bp=break point
    cin>>n>>k;

    vector<int>prince(n);
    
    while (true) {
        p++;
        if (bp == n - 1) break;
        
        if (p==k){
            prince[p-1]=1;
            bp++;
        }
        else if (p>k){
            p=0;
        }
    }
    //TODO:인덱스 출력?
    /*for(int i=0;i<n;i++){
        if(prince[i]==0) cout<<인덱스를 출력;}*/

    return 0;
}

