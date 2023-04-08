#include<bits/stdc++.h>

using namespace std;

int firstOccurence(int a[], int n, int index, int k){
    if(index==n)
    return -1;
    
    if(a[index]==k)
        return index;
    
    return firstOccurence(a,n,index+1,k);
}

int main(){
    int a[]={2,3,6,9,8,3,2,6,2,4};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<firstOccurence(a,n,0,6);
}