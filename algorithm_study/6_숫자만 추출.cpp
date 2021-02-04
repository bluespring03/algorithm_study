//
//  6_숫자만 추출.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/03.
//

#include <iostream>
using namespace std;
#include <string>

int main(){
    
    string a;
    
    cin>>a;
    int num=0, c=0;
    
    for (int i=0; a[i]!='\0'; i++)
        if(a[i]==48||a[i]<=57)
            num=num*10+ (a[i]-48);
        
    for (int i=1; i<=num;i++)
    if(num%i==0)
        c++;
    
    printf("%d\n%d \n", num, c);
    
    return 0;
}
