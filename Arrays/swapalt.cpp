#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swapalt(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(arr[i], arr[i + 1]);
        i++;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    swapalt(arr, n);
    printarray(arr, n);
    return 0;
}