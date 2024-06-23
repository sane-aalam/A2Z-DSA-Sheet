#include<bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(int index, int target,vector<int> & candidates,
    vector<int> & oneCombination, vector<vector<int>> & AllCombinations){
        
        // base condition
        if(index == candidates.size()){
            if(target == 0){
                AllCombinations.push_back(oneCombination);
            }
            return;
        }

        // Every index value you have two choice 
        // Either you can pick the element or not pick the element 
        // but When you pick the element into candidates array, Then you can also follow this rule
        // The same number may be chosen from candidates an unlimited number of times

        //* pick the element
        if(candidates[index] <= target){
            oneCombination.push_back(candidates[index]);
            solve(index,target-candidates[index],candidates,oneCombination,AllCombinations);
            oneCombination.pop_back();
        }

        //* not pick the element 
        solve(index+1,target, candidates,oneCombination,AllCombinations);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> AllCombinations;
        vector<int> oneCombination;
        int index = 0;
        solve(index,target,candidates,oneCombination,AllCombinations);
        return AllCombinations;
    }
};