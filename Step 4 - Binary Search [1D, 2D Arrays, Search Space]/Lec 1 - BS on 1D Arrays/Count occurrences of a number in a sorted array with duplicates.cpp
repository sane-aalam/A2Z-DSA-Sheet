#include<bits/stdc++.h>
using namespace std;


class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int findFirstPosition(int nums[],int targetValue, int n){
        int start = 0;
        int end = n - 1;
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
     int findLastPosition( int nums[],int targetValue, int n){
        int start = 0;
        int end = n - 1;
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
	int count(int arr[], int n, int x) {
	    // code here
	    int result1 = findFirstPosition(arr,x,n);
	    int result2 = findLastPosition(arr,x,n);
	    
        // simple steps to calculate the total number of occurrence
        // last - first + 1
	    int NumberOccurrence = result2 - result1 + 1;
	    
	    if(result1 == -1 and result2 == -1){
	        return 0;
	    }else{
	        return NumberOccurrence;
	    }
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
