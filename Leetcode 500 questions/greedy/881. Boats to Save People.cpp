
//* GREEDY Approach 
// 1. pick the maximum element + minimum element (go to boats limits accoroading)
// 2. then second_maximum element + second_minimum element 
// 3. repeat the process 


/* problem statement-
You are given an array people where people[i] is the weight of the ith person, and an infinite number of boats where each boat can carry a maximum weight of limit. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most limit.
Return the minimum number of boats to carry every given pers
*/


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int start = 0;
        int end = people.size() - 1;
        int boatsToSavePeople = 0;
        
        while(start <= end){
            if(people[start] + people[end] <= limit){
                start++;
                end--;
                //  minimum number of boats to carry every given person.
                boatsToSavePeople ++;
            }else{
                end--;
                boatsToSavePeople ++;
            }
        }
        //  minimum number of boats to carry every given person.
        return boatsToSavePeople;
    }
};