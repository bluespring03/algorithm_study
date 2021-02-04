//
//  1_1부터_N까지_M의_배수합.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/02.
//

#include <iostream>
using namespace std;

int main(){
    int n, m, sum=0;
    cin>> n;
    cin>> m;
    for (int i=1; i<=n; i++){
        if(i%m==0)
            sum+=i;
    }
    
    return sum;
    
}
