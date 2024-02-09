#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int q = i;
        while (q >= 1 and arr[q] < arr[q - 1])
        {
            swap(arr[q], arr[q - 1]);
            q--;
        }
    }
}
int main()
{
    int arr[] = {1, 3, 2, 6, 5, 4, 3, 2, 1, 7, 8, 9, 0};
    int n = sizeof(arr) / sizeof(int);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    insertion_sort(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
    return 0;
}