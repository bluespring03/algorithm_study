//FIXME
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
    int cnt[10]={0};
    
    while(n>9){
        
        cnt[n%10]++;
        n=n/10;
    }
    cnt[n]++;
    
    for (int i=0; i<10; i++) cout<<cnt[i]<<" ";
        
    
    return 0;
}

/*int cnt[10];//전역 변수 선언. 다 0으로 초기화.

char input[100];
// string input;
// index 0 1 2 3 4 5 6 7 8 9
// value 0 0 0 0 0 0 0 0 0 0

int main(){
//    cout <<  INT_MAX << endl;

    cin>>input;
    
    int temp;
//    for(int i = 0 ; i<input.size();i++){
//        temp = input[i]-48;
//        cnt[temp]++;
//    }
    
    for(int i = 0; input[i]!='\0';i++){
        temp = input[i] - 48;
        cnt[temp]++;
    }
    
    
//
//    cout << LONG_LONG_MAX << endl;
//    cout << n << endl;
//    while(n>9){
//        cnt[n%10]++;
//        n=n/10; //1234
//    }
//    cnt[n]++;
    
   
 
    for (int i=0; i<10; i++) cout<<cnt[i]<<" ";
        
    
    return 0;
}*/
