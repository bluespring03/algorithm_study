//
//  35_Special Sort(구글 인터뷰).cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/14.
//

#include <iostream>
#include<string>
using namespace std;

int main(){
    
    int x[100], n; cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    
    string xminus,xplus;
    
    //string a=to_string(n)
    
    for(int i=0;i<n;i++){
        if (x[i]<0)
            xminus=xminus+" "+to_string(x[i]) ;
        else
            xplus=xplus+" "+to_string(x[i]) ;
        }
    
    
    cout<<xminus<<xplus<<endl;
    
    return 0;
}

