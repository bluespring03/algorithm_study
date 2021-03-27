//
//  53_k진수 출력.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/21.
//
//FIXME: push pop 함수
#include <iostream>
using namespace std;
int stack[100],top=-1;

void push(int n){
    top++;
    stack[top]=n;
}
int pop(){
    top--;
    return stack[top];
}

int main(){
    int n,k; cin>>n>>k;
    char str[20]="0123456789ABCDEF";
    while(n>0){
        push(n%k);
        n=n/k;
    }
    while(top!=-1){
        cout<<str[pop()];
        }
    
    return 0;
}
