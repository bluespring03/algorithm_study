

//  42_이분검색.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/14.
//

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    int n,m; cin >> n>>m;
    vector<int> x(n);
    for(int i=0; i<n;i++) cin >> x[i];
    
    sort(x.begin(),x.end());
    
    int mid=(n+1)/2;
    
    while(true){
        if(m==x[mid])
            break;
        else if (m>x[mid])
            mid=mid+ (n-mid)/2;
        else
            mid=(mid+1)/2;
    }
    
    cout<<mid+1;
    
    return 0;
}
