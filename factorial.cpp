#include<bits/stdc++.h>

using namespace std;


    // IBH method se solve kr sakte hai


    int fact(int n){

        // Base case

        if(n < 0) return 0;

        if(n == 0 || n == 1) return n;

        else
                return n*fact(n-1);
    }

    int main(){
        
        cout<<fact(5)<<" ";
    }