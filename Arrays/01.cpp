#include<iostream>
using namespace std;
void seg(int arr[],int n){
    int zero=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            zero++;
        }
    }
    int one = n-zero;
    for (int i = 0; i < zero; i++)
    {
      arr[i]=0;
    }
    for (int i = zero-1; i < n; i++)
    {
      arr[i]=1;
    }
    
}
int main()
{
    int arr[] = {0,1,0,1,0,0,0,1,1,1,0,0,1,0,1};
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    int n = sizeof(arr) / sizeof(int);
    seg(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
 return 0;
}