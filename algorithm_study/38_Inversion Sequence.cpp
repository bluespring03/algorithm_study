//
//  38_Inversion Sequence.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/14.
//

#include <iostream>
using namespace std;
#include<string>

int main(){
    int N, n[100]; cin>>N;
    for(int i=0;i<N;i++) cin>>n[i];
    
    int is[100]={0,};
    
    
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(n[j]>n[i])
                is[i]++;
        }
    }
    //그 다음에 출력 어떻게 해야되는지 모르겠다
    return 0;
    
}
