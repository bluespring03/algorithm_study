//
//  2_자연수의 합.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/02.
//

#include <iostream>
using namespace std;

int main(){
    int a,b,sum=0;
    cin >> a >> b;
    for(int i=a; i<b; i++){
        sum+=i;
        cout<<i<<'+';
    }
    sum+=b;
    
    cout<<b<<"="<<sum<<endl;
    
    return 0;
}
