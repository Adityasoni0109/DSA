#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main()
{
    int arr[]={1,3,2,6,5,4,3,2,1,7,8,9,0};
    int n = sizeof(arr)/sizeof(int);
    for(auto x:arr){
        cout<<x<<" ";
    }cout<<endl;
    selection_sort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}