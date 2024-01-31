#include <iostream>
using namespace std;
// Can be done with Linear search also
// Can be done with binary search also
int firstocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        mid = s + ((e - s) / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        mid = s + ((e - s) / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
    }
    return ans;
}
int totalocc(int arr[],int n , int key){
    int total = lastocc(arr,n,key) - firstocc(arr,n,key) + 1;
    return total;
}

int main()
{
    int arr[] = {1,2,2,3,3,3,5,5,5,5,5,6,6,66,6,6,6,6};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    cout<<totalocc(arr,n,key);
    return 0;
    return 0;
}