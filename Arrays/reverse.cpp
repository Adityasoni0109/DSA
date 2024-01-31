#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void revarr(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(int);
    for(auto x : arr){
        cout<<x<<" ";
    }cout<<endl;
    revarr(arr,n);
     for(auto x : arr){
        cout<<x<<" ";
    }

 return 0;
}