#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
    int s=0,e=n-1;
    int mid=s+((s+e)/2);
    for (int i = s; i < e; i++)
    {
        mid=s+((s+e)/2);
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }

    }return -1;
    
}
void printarray(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main()
{  int arr[]={1,2,3,4,5,8,9,10,12,15};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key);
 return 0;
}