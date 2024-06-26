class Solution {
private:
    void reverseArrayConcept(vector<int> & nums, int start, int end){
        while(start < end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        // step-1 reverse the full array (get final result)
        // step-2 reverse(index 0 to index k);
        // step-3 reverse(index k to n-1);
        reverseArrayConcept(nums,0,n -1);
        reverseArrayConcept(nums,0,k-1);
        reverseArrayConcept(nums,k,n - 1);
    }
};