#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
    int start=0;
    int end=n-1;
    int mid=0;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
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
{   int arr[]={1,2,3,4,5,8,9,10,12,15};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key);
  

 return 0;
}
