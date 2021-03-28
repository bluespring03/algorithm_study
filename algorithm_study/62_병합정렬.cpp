//
//  62_병합정렬.cpp
//  algorithm_study
//
//  Created by 수연 on 2021/03/27.
//

#include <iostream>
using namespace std;
#include<vector>


void divide(int lt, int rt){
    int mid;
    if(lt<rt){
        mid=(lt+rt)/2;
        divide(lt, mid);
        divide(mid+1,rt);}
}

void merge(int n){
    
}

int main(){
    int num; cin>>num;
    vector<int>n(num); for(int i=0;i<num;i++) cin>>n[i];
    divide(n[0],n[num]);
    
}
/*#include <iostream>
using namespace std;

int arr[101];
int sorted[101];

void mergesort(const int,const int);
void merge(const int,const int);

int main()
{
    int n,i;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> arr[i];
    }
    
    mergesort(1, n);
    
    for(i=1;i<=n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


void merge(const int begin,const int end){
    int p1,p2,p3;
    int mid = (begin+end)/2;
    p3 = p1 = begin;
    p2 = mid+1;
    while(p1 <= (begin+end)/2 && p2<=end){
        if(arr[p1]<=arr[p2]){
            sorted[p3++] = arr[p1++];
        }
        else{
            sorted[p3++] = arr[p2++];
        }
    }
    while(p1<=mid) sorted[p3++] = arr[p1++];
    while(p2<=end) sorted[p3++] = arr[p2++];
    for(int i = begin; i <= end;i++){
        arr[i] = sorted[i];
    }
}
void mergesort(const int begin, const int end){
    int mid;
    if(begin < end){
        mid = (begin + end)/2;
        mergesort(begin,mid);
        mergesort(mid+1,end);
        merge(begin,end);
    }
}
