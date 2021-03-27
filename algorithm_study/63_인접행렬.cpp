//
//  63_인접행렬.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/28.
//

#include <iostream>
using namespace std;
#include<vector>

int main(){
    int num,edge; cin>>num>>edge;
    vector<vector<int>> n(edge,vector<int>(edge,0));
    int x,y,w;
    
    for(int i=0;i<edge;i++){
        cin>>x>>y>>w;
        n[x-1][y-1]=w;
    }
    
    for(int i=1;i<=num;i++){
        for(int j=1; j<=num; j++){
            cout<<n[i][j];} cout<<"\n";}
    //https://www.avanderlee.com/swift/exc-bad-access-crash/
    
    return 0;
}
