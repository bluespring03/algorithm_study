//
//  32_선택정렬.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/02/13.
//

//찾아보기
//call by value
//calll by address
//call by reference

#include <iostream>
using namespace std;

void swap(int *p, int *q){
    int tmp;
    
    tmp=*p;
    *p=*q;
    *q=tmp;
}

int main(){
    int N,n[100], min; cin>>N;
    for(int i=0;i<N;i++) cin>>n[i];
    
    for(int i=0;i<N-1;i++){
        min=n[i];
        int index=i;
        
        for(int j=i+1; j<N; j++){
            if(min>n[j]) min=n[j];
            }
        if (n[i]>min)
            swap(&n[i],&min);
        
        for(int i=0;i<N;i++) cout<<n[i]<<" ";//확인용-왜 틀리는지 모르겠어요
        cout<<"\n";
    }
    
    for(int i=0;i<N;i++) cout<<n[i]<<" ";
    return 0;
}

//call by address
//void swap(int *p, int *q){
//    int tmp;
//
//    tmp = *p;
//    *p = *q;
//    *q = tmp;
//}


/*void swap(int &p, int &q){
    int tmp;
    tmp=p;
    p=q;
    q=tmp;
}
int n[100];

//input
//6
//13 5 11 7 23 15
int main(){
    
    // TODO: n[100] n[index] 이용해서 접근. n 배열이 n주소값, index 이뤄져 있는데, min 변수 n배열이 상관관계 X
    int N,min; cin>>N;
    for(int i=0;i<N;i++) cin>>n[i];
    
    for(int i=0;i<N-1;i++){
        int idx = i;
//        min=n[i];
        for(int j=i+1; j<N; j++){
            if(n[idx]>n[j]){
//                min=n[j]; // 최소값을 min이라는 변수에 할당.
                idx = j; // 그 때의 index는 배열의 j번째이다.
            }
        }
        if(n[i]>n[idx])
            swap(n[i],n[idx]); // 최소값을 해당하는 인덱스.

        for(int i=0;i<N;i++) cout<<n[i]<<" ";
        cout<<"\n";
    }
    
    for(int i=0;i<N;i++) cout<<n[i]<<" ";
    return 0;
}*/
