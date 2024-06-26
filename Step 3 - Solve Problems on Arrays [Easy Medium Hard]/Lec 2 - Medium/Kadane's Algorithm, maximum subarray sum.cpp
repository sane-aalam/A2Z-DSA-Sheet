
// prefix-sum approach 
class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {
        
        int minimum = 0;
        int runningSum = 0;
        int maximum = arr[0];
        
        for(int i = 0; i< n; i++){
            runningSum = runningSum + arr[i];
            maximum = max(maximum, runningSum - minimum);
            minimum = min(minimum,runningSum);
        }
        return maximum;
    }
};

// kadane's algorithm 

class Solution {
  public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {
        
        long long current_sum = 0;
        long long maximum_sum = INT_MIN;
        
        for(int i = 0; i<n; i++){
            
           current_sum += arr[i];
           if(current_sum > maximum_sum){
               maximum_sum = current_sum;
           }
           if(current_sum < 0){
              current_sum = 0;
           }
        }
        return maximum_sum;
    }
};