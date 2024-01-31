#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int leftsum=0;
    int totalsum=0;
    for (int i = 0; i < n; i++)
    {
        totalsum+=arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     totalsum = totalsum - arr[i];
        
    // }
    return -1;
    
    
}
int main()
{
    int arr[]={1,2,3,4,3,2,1};
    int n = sizeof(arr) / sizeof(int);
    cout<<pivot(arr,n);

 return 0;
}