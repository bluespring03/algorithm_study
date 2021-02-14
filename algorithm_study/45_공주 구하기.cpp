//
//  45_공주 구하기.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/14.
//

#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n, k, p=0, bp=0, c=0;//p=position, bp=break point
    cin>>n>>k;

    vector<int>prince(n + 1);

    while (1) {
        p++;
        if (p > n)
            p = 1;
        if (prince[p] == 0) {
            c++;
            if (c == k) {
                prince[p] = 1;
                c = 0;
                bp++;}
        }
        if (bp == n - 1) break;
    }
    cout<<p;
    return 0;
}
