//
//  17_선생님 퀴즈.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/06.
//

#include <iostream>
#include<string>
using namespace std;


int main(){
    int n; cin>>n;
    int x, y;
    string answer;
    
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y==x*(x+1)/2)
            answer+="YES ";
        else
            answer+="NO ";
    }
    cout<<answer<<endl;
    
    return 0;
}

