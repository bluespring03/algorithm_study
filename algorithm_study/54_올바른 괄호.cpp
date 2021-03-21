//
//  54_올바른 괄호.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/21.
//
int stack[31], topIndex=-1;

#include <iostream>
using namespace std;
#include<string>

void push(int n){
    stack[++topIndex]=n;
}
int pop(){
    return stack[--topIndex];
}

int main(){
    string a; cin>>a;
    
}
