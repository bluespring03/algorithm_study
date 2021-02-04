//FIXME
//
//  9_모두의 약수.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/03.
//

#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int c=0;
    
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; i++)
        {if(i%j==0)
            c++;
            cout<<c;
            c=0;
        }
    }
 
    
    return 0;
}
