//
//  28_N!에서 0의 개수.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/11.
//


#include<string>
#include <iostream>
using namespace std;

long fact(int n){
    if(n==0)
        return 1L;
    else
        return n*fact(n-1);
    }

int main(){
    int n; cin>>n;
    n=fact(n);

    int cnt=0;
    string a=to_string(n);
    a=a+'1';   //맨 마지막 0인 경우가 반복문에는 포함되지 않아서 따로 1을 추가해 줌.
    
    for(int i=0; a[i]!='\0';i++){
        if(a[i]==48 && a[i+1]!=48)
            cnt++;
    }

    cout<<cnt<<endl;
    
    return 0;
}
