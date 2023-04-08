#include<bits/stdc++.h>

using namespace std;

 void pdi(int n){

    // print in increasing order
    if(n==0) return ;
    // pdi(n-1);
    cout<<n<<"\n";
    pdi(n-1);
    cout<<n<<"\n";
    // now print in decreasing order

    // cout<<n<<"\n";
    // 
 }


 int main(){
    
    pdi(5);

 }