#include<bits/stdc++.h>

// a ar a(r^2) a(r^3) ....  a(r^n)

// nth term -- > An = A(r^n-1)  2(3^5-1)

using namespace std;

    // int powr(int x, unsigned int y){
    //     if(y == 0) return 1;

    //     if(y%2 == 0) return powr(x/2,y)*powr(x/2,y);

    //     else  return powr(x/2,y)*powr(x/2,y) * x;
    // }
  int NthTermGp( int a, int r, int n){

            return (a * (int)( pow(r,n-1)));
  }

        int main(){
               // starting number
    int a = 2;
  
    // Common ratio
    int r = 3;
  
    // N th term to be find
    int N = 5;
  
    // Function call
    cout << "The " << N << "th term of the series is : "
         << NthTermGp(a, r, N);
        }

  /*Time complexity: O(log N) because using the inbuilt pow function
Auxiliary Space: O(1)

*/


