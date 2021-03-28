//
//  53_k진수 출력.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/21.
//
//FIXME: push pop 함수
#include <iostream>
// #include <stack>
using namespace std;
int stack[100],top=-1;

void push(int n){
    top++;
    stack[top]=n;
}

void pop(){
    top--;
}

int main(){
    int n,k; cin>>n>>k;
    char str[20]="0123456789ABCDEF";
    
    while(n>0){
        push(n%k);
        n=n/k;
    }
    while(top!=-1){
        cout<<stack[top]; //16진수일 땐: str[stack[top]];
        pop();
    }
    
    return 0;
}
