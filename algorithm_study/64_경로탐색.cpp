//
//  64_경로탐색.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/28.
//

#include<iostream>
using namespace std;

int map[30][30], ch[30], cnt=0, n;

void dfs(int v){
    int i;
    if(v==n){
        cnt++;
    }
    else{
        for(i=1; i<=n; i++){
            if(map[v][i]==1 && ch[i]==0){
                ch[i]=1;
                dfs(i);
                ch[i]=0;
            }
        }
    }
}
                
int main(){
    freopen("input.txt", "rt", stdin);
    int m, i, a, b; cin>>n>>m;
    
    for(i=1; i<=m; i++){
        cin>>a>>b;
        map[a][b]=1;}
    
    ch[1]=1;
    dfs(1);
    cout<<cnt;
    return 0;
}
