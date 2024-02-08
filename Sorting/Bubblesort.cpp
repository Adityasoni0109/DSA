#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
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
    bubble_sort(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}