class Solution {
private:
    int findFirstPosition(vector<int> & nums,int targetValue){
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/2;
        int first_index_value = -1;

        while(start <= end){
            if(nums[mid] == targetValue){
                first_index_value = mid;
                end = mid - 1;
            }else if(nums[mid] < targetValue){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // update the middle point 
            mid = start + (end - start)/2;
        }
        return first_index_value;
    }
     int findLastPosition(vector<int> & nums,int targetValue){
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start)/2;
        int last_index_value = -1;

        while(start <= end){
            if(nums[mid] == targetValue){
                last_index_value = mid;
                start = mid + 1;
            }else if(nums[mid] < targetValue){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // update the middle point 
            mid = start + (end - start)/2;
        }
        return last_index_value;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        if(nums.size() == 0){
            return {-1,-1};
        }

        int first_position_index = findFirstPosition(nums,target);
        int last_position_index = findLastPosition(nums,target);
        return {first_position_index,last_position_index};
    }
};