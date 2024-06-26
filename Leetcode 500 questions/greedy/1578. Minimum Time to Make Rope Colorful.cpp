
// Alice wants the rope to be colorful.
// She does not want two consecutive balloons - (step-1)
// Bob can remove some balloons from the rope to make it colorful. You are given a 0-indexed integer array neededTime where neededTime[i] is the time (in seconds) that Bob needs to remove the ith balloon from the rope. (suppose you are bob)
// how you can remove to make colorfuls within minimum times (required)

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int previours_time = 0;
        int current_time = 0;
        // minimum time taken to colors 
        int time_taken = 0;
        
        for(int i = 0; i<colors.size(); i++){
            if(i > 0 and colors[i] != colors[i-1]){
                // both char are not equal then make pre-time is zero (re-start)
                previours_time = 0;
            }
            current_time = neededTime[i];
            time_taken += min(current_time,previours_time);
            previours_time = max(current_time,previours_time);
            
        }
        return time_taken;
    }
};