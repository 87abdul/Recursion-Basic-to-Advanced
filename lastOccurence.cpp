#include <bits/stdc++.h>

using namespace std;

int lasttOccurence(int a[], int n, int index, int k)
{
    if (index == n)
        return -1;

    int lisa = lasttOccurence(a, n, index + 1, k);
    if (lisa == -1)
    {
        if (a[index] == k)
            return index;
        else
            return -1;
    }

    else
    {
        return lisa;
    }
}

int main()
{
    int a[] = {2, 3, 6, 9, 8, 3, 2, 6, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);
    cout << lasttOccurence(a, n, 0, 2);
}