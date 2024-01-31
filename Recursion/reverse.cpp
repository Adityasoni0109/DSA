#include<bits/stdc++.h>
using namespace std;
void rev(int i,int arr[],int n){
    if(i>=n/2) return;
    else{
        swap(arr[i],arr[n-i-1]);
        rev(i+1,arr,n);
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    rev(0,a,5);
    for(auto x : a){
        cout<<x<<" ";
    }
    // for(int i = 0 ;i < 5;i++){
    //     cout<<a[i]<<" ";
    // }
    return 0;
}