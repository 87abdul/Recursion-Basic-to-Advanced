#include<bits/stdc++.h>

 using namespace std;

  void display(vector<int>&nums, int n, int index){


        if(index == n) return ;

        display(nums, n, index+1);
        cout<<nums[index]<<" " ; 
       
  }


  int main(){
    
    vector<int> nums = {23,15,10,20,0};

    // for(auto it : nums)

    display(nums, nums.size(), 0);
  }