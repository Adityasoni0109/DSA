#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
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
        mid = (s + e) / 2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
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
        mid = (s + e) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {1,2,2,3,3,3,5,5,5,5,5,6,6,6,6,6,6};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    cout << firstocc(arr, n, key);
    cout << lastocc(arr, n, key);
    return 0;
}