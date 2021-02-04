//
//  3_진약수의 합.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/02.
//

#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;
    for(int i=1; i<n;i++){
        if(n%i==0){
            sum+=i;
            cout<<i<<'+';
        }
    }
    cout<<'='<<sum<<endl;
    return 0;
}
