class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // easy to understand approach using math
        int n = nums.size(); 
        int totalNumber = (n*(n+1)/2);
        int totalSum = 0;
        for(int currentIndex = 0; currentIndex < n; currentIndex++){
                totalSum += nums[currentIndex];
        }

        return totalNumber - totalSum;
    }
};