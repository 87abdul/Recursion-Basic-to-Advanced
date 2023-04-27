#include <bits/stdc++.h>

using namespace std;

// print array elements recursively
void displayArray(int arr[], int n, int idx)
{
    if (idx == n)
        return;

    cout << arr[idx] << " ";
    displayArray(arr, n, idx + 1);
    // cout<<arr[idx]<<" ";
}

int maximum(int a[], int n, int index)
{
    if(index==n-1)
    return a[index];
     int max = maximum(a, n, index + 1);
    if (a[index] > max){
        return a[index];
    }else{
    return max;
    }
}

int main()
{
    int arr[] = {5, 7, 8, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    displayArray(arr, n, 0);
    cout<<"\n";
    cout<<maximum(arr,n,0);
}
