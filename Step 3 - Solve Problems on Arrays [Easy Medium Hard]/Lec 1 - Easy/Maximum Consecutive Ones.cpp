class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_consective_ones = 0;
        int current_count = 0;

        for(int currentIndex = 0; currentIndex < nums.size(); currentIndex++){
            if(nums[currentIndex] != 0){
                current_count++;
                max_consective_ones = max(max_consective_ones,current_count);
            }else{
                current_count = 0;
            }
        }   
        return max_consective_ones;
    }
};