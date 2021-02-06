//
//  21_카드 게임.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/06.
//

#include <iostream>
using namespace std;

int main(){
    int A=0,B=0,i;
    int a[10],b[10];
    
    for(i=0;i<10;i++) cin>>a[i];
    for(i=0;i<10;i++) cin>>b[i];
    
    for(i=0;i<10;i++){
        if(a[i]>b[i])
            A+=3;
        else if(a[i]<b[i])
            B+=3;
        else
        {A++;B++;}
    }
    cout<<A<<" "<<B;
    
    if (A>B)
        cout<<"\nA";
    else if (B>A)
        cout<<"\nB";
    else
        cout<<"\nD";

}
