//
//  13_가장 많이 사용된 자릿수.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/05.
//

#include <iostream>
#include<string>
using namespace std;

int main(){
    int n; cin>>n;
    int pm=0,c=0;
    
    for(int i=2;i<=n;i++){
        for(int j=1; j<=i; j++){
            if(i%j==0)
                c++;
        }
        if(c==2){
            pm++;
        }
        c=0;
    }
    
    cout<<pm<<endl;
    
    return 0;
}
