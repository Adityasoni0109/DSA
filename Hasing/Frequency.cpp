#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,3,2,1,6,7,8,1,1,2,3,2,1,3};
    int n;
    n=sizeof(arr)/sizeof(int);
    //Create a new array with size of maximum element plus one (Because of 0 also as element)
    int hash[9]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]+=1;
    }
    cout<<"Enter the number whose frequency you want to know";
    int x;
    cin>>x;
    cout<<hash[x];

    return 0;
}