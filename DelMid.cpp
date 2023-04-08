#include<bits/stdc++.h>

    using namespace std;


    class Solution{

        public : 
    // How to proceed with?

    // I'll go with IBH method

    // Hypthesis
    stack<int> delMidELe(stack<int>&s, int size){

        // Base Case 

         if(s.size() == 0) 
         return s;

         int k = size/2 + 1;

         solve(s,k);

         return s;
    }

        
        // Induction step for above     and Actually it becomes a new problem so we can solve using loop as well but for the timing lets do it with recursion

    void solve(stack<int>&s, int k){

        // Base Case

        if(k == 1){
            s.pop();
            return ;
        } 

        int tempVal = s.top();
        s.pop();

        solve(s, k-1); // hypothesis on smaller input

        s.push(tempVal);
    
        return;
    } 

};
    int main(){

        vector<int> vec = {5,4,3,2,1};

        Solution s;

        stack<int>stk;

        for(auto it : vec){
            stk.push(it);
        }

        stack<int>temp;

        temp = s.delMidELe(stk, stk.size());

        vector<int> ans;

        while(!temp.empty()){
            
            int tp = temp.top();
            temp.pop();
            ans.push_back(tp); 
        }

        reverse(ans.begin(), ans.end());

        for(auto it : ans){
            cout<<it<<" ";
        }
    }

