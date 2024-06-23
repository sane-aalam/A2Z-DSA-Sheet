#include <bits/stdc++.h>
using namespace std;

// approach-1 sort the array + return arr[n-2]
// approach-2 we can use the student1 and student2 appraoch,
//              according to ranks to students, will become first and second into the array 

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int first_maximum_element = -1;
	    int second_maximum_element = -1;
	    
	    for(int index = 0; index < n; index++){
	        if(arr[index] > first_maximum_element){
	            
	             // second student assign the value of firststudent rank 
	            // first student assign new value(High value)
	           second_maximum_element = first_maximum_element; // assign first student marks into the second student
	            first_maximum_element = arr[index];          // second student gets maximum marks, so udpate with current_value
	         
	        }else if(arr[index] < first_maximum_element && arr[index] > second_maximum_element){
	        
	        // what if you currentElement is smaller to the firstElement,
	       // and also greater to the nextElement,Then you can easy update
	       // the value of the secondElementMaximum
	                second_maximum_element = arr[index];
	       }
	    }
	    
	    return second_maximum_element;
	}
};

// main function - start code of c++
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
