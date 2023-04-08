#include<bits/stdc++.h>

using namespace std;

void printZigzag(int n){
    if(n==0)
    return;
    cout<<"pre\t : "<<n<<endl;
    printZigzag(n-1);
    cout<<"in\t : "<<n<<endl;
    printZigzag(n-1);
    cout<<"post\t : "<<n<<endl;
}

int main(){
    int n=5;
    printZigzag(n);
}