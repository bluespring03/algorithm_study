//
//  10_자릿수의 합.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/04.
//

#include <iostream>
using namespace std;
#include<string>
int a=0,c=0, sum=0;
int digit_sum(string x);


int main(){
    string x; cin>>x;
    digit_sum(x);
    cout<<" "<<sum;
    return 0;
}


int digit_sum(string x){
    for(int i=0; x[i]!='\0'; i++)
            c++;
    for(int i=1; i<=c; i++){
        a=stoi(x.substr(c-i-1,c));
        sum+=a;
        cout<<" "<<sum;
    }
    
    return sum;
}
