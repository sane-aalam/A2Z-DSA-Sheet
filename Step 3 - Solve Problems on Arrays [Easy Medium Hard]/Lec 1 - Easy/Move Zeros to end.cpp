class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int areYouNonZeroElement = 0;

         for(int currIndex = 0; currIndex<nums.size(); currIndex++){
            if(nums[currIndex] != 0){
                swap(nums[currIndex], nums[areYouNonZeroElement]);
                areYouNonZeroElement++;
            }
         }
    }
};