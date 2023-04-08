#include<bits/stdc++.h>

    using namespace std;


    class Solution{

        public : 
    // How to proceed with?

    // I'll go with IBH method

    // Hypthesis
    void sort(vector<int>&vec){

        // Base Case 

         if(vec.size() == 1) 
         return;

         // Smaller input on the behalf of hypothesis----> sabse end wala elements ko nikalna shuru krenge then compare karke insert kar denge

         int temp = vec[vec.size()-1];

            vec.pop_back();

            sort(vec);

            insert(temp, vec);
         
    }
        
        // Induction step for above     and Actually it becomes a new problem so we can solve using loop as well but for the timing lets do it with recursion

    void insert(int temp, vector<int>&vec){

        // Base Case

        if(vec.size() == 0 || vec[vec.size()-1] <= temp){
            vec.push_back(temp);
            return ;
        } 

        int tempVal = vec[vec.size()-1];
        vec.pop_back();

        insert(temp, vec);

        vec.push_back(tempVal);
    
        return;
    } 

};
    int main(){

        vector<int> vec = {2,1,54,89,0,23};

        Solution s;

        s.sort(vec);

        for(auto it : vec){
            cout<<it<<" ";
        }
    }

