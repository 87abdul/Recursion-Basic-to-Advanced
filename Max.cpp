#include<bits/stdc++.h>

 using namespace std;

  int maxEle(int nums[], int n, int index, int mx){

    // int mx = INT_MIN;

        if(index == n) 

        return mx ;

        if(mx < nums[index]){
            mx = nums[index];
        }
        // cout<<nums[index]<<" " ; 
        // display(nums, n, index+1);
        maxEle(nums, n, index+1, mx);

        // return mx;
  }


  int main(){
    
    int nums[] = {23,15,10,200,0};

    int n = sizeof(nums)/sizeof(nums[0]);
    // for(auto it : nums)

    int mx = INT_MIN;

    cout<<maxEle(nums, n, 0,mx);
  }