#include<bits/stdc++.h>

using namespace std;


// An integer n is a power of four, if there exists an integer x such that n == 4x.
  class Solution {
public:
    bool isPowerOfFour(int n) {
        // Base Cases
        if(n == 0){
            return false;
        }
        if(n == 1){
            return true;
        }
        // Check remainder is 0 or not when divided by 4, and recursion call.
        return ((n % 4 == 0) && isPowerOfFour(n/4));
    }
};

int main(){
    int n=4096;
    Solution s;
    cout<<boolalpha<<s.isPowerOfFour(n);
}