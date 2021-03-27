//
//  58_이진트리 DFS.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/27.
//

#include <iostream>
using namespace std;

void dfs(int v){
    if (v>7) return;
    else{
        
        dfs(v*2);//오른쪽 자식 노드
        cout<<v<<" ";//전중후 왔다갔다 하면 됨
        dfs(v*2+1);//왼쪽 자식 노드
        
    }
}

int main(){
    dfs(1);
    return 0;
}
