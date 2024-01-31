#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
    int ans = -1;
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        mid = (e + s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            mid = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }
    cout<<ans<<endl;
    // return ans;
}
int lastocc(int arr[], int n, int key)
{
    int ans = -1;
    int s = 0, e = n - 1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        mid = s + ((e - s) / 2);
        if (arr[mid] == key)
        {
            ans = mid;
            mid = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 1, 3, 3, 3, 3, 3, 4, 5, 8, 9, 9, 9, 9, 9, 9};
    int n = sizeof(arr) / sizeof(int);
    int key = 3;
    // cout << firstocc(arr, n, key) << " " << lastocc(arr, n, key);
    firstocc(arr,n,key);
    return 0;
}