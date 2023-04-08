#include<bits/stdc++.h>

    using namespace std;


    class Solution{

        public : 
    // How to proceed with?

    // I'll go with IBH method

    // Hypthesis
    void reverse(stack<int>&s){

        // Base Case 

         if(s.size() == 1) 
         return;

         // Smaller input on the behalf of hypothesis----> sabse end wala elements ko nikalna shuru krenge then compare karke insert kar denge

         int temp = s.top();

            s.pop();

            reverse(s);

            insert(temp, s);
         
    }
        
        // Induction step for above     and Actually it becomes a new problem so we can solve using loop as well but for the timing lets do it with recursion

    void insert(int temp, stack<int>&s){

        // Base Case

        if(s.size() == 0 ){
            s.push(temp);
            return ;
        } 

        int tempVal = s.top();
        s.pop();

        insert(temp, s);

        s.push(tempVal);
    
        return;
    } 

};
    int main(){

        vector<int> vec = {2,1,54,89,0,23};

        Solution s;

        stack<int>stk;

        for(auto it : vec){
            stk.push(it);
        }

        s.reverse(stk);

        vector<int> ans;

        while(!stk.empty()){
            
            int tp = stk.top();
            stk.pop();
            ans.push_back(tp); 
        }

         reverse(ans.begin(), ans.end());

        for(auto it : ans){
            cout<<it<<" ";
        }
    }

