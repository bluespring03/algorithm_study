//
//  20_가위 바위 보.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/06.
//

#include <iostream>
using namespace std;

int main(){
    int a[100], b[100],n; cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    
    for(int i=0; i<n; i++){
        if(a[i]==b[i]) cout<<"D\n";
        
        else if(a[i]==1 && b[i]==3) cout<<"A\n";
        else if(a[i]==2 && b[i]==1) cout<<"A\n";
        else if(a[i]==3 && b[i]==2) cout<<"A\n";
        
        else cout<<"B\n";
    }
    
    return 0;
}
