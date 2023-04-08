#include<bits/stdc++.h>

using namespace std;

    int fib(int n){

        if(n < 0) return 0;

        if ( n == 0 || n == 1) return n;

        else return fib(n-1) + fib(n-2);
    } 


    int main(){
        cout<<fib(8)<<" "; // 0 1 1 2 3 5 8 13 21 -- > n = 8
    }
