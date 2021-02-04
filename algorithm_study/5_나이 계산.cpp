//
//  5_나이 계산.cpp
//  algorithm_ps
//
//  Created by 수연 on 2021/02/02.
//

#include <iostream>
using namespace std;
#include <string>

int main()
{
    string id;
    cin>>id;
    int age = stoi(id.substr(0,2));
    
    if(id[7]=='3' || id[7]=='4')
        age=19-age+1;
    else
        age=100-age+19+1;
    
    if(id[7]=='1' || id[7]=='3')
        cout<<age<<" M"<<endl;
    else
        cout<<age<<" W"<<endl;
    
    return 0;
}
