
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int largest(vector<int> &arr, int n){
        
        int maximumElement = arr[0];

        for(int currentIndex = 0; currentIndex < n; currentIndex++){
            if(arr[currentIndex] > maximumElement){
                maximumElement = arr[currentIndex];
            }
        }
        // return the result of the maximum Element into the array 
        return maximumElement;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}
