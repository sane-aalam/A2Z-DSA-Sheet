// 1.we can simple think about greedy take maximum tokens to make power high,
// Then you can contain maximum score 
// 2. to apply you need to sort the array
//   [startingelement_minimum_value,..................,last_element_maximum_value_tokens]
// 3. you can easy apply you can pick -> incease the score by 1 
// 4. you can not pick -> power you can incase + decease the score by 1


// just follow these conditon to write down the code
/*
Face-up: If your current power is at least tokens[i], you may play tokeni, losing tokens[i] power and gaining 1 score.
Face-down: If your current score is at least 1, you may play tokeni, gaining tokens[i] power and losing 1 score.
*/

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
                
        sort(tokens.begin(),tokens.end());
        
        int start = 0;
        int end = tokens.size() - 1;
        
        int maximum_possible_score = 0;
        int count = 0;
        
        while(start <= end){
            if(tokens[start] <= power){
                power = power - tokens[start];
                start++; // incease the start pointer
                count = count + 1;
                maximum_possible_score = max(maximum_possible_score,count);
            }else if(count > 0){
                power = power + tokens[end];
                end--;
                count--;
                // decrease the count
                // decrease the end pointer
            }else{
                break;
            }
        }
        
        return maximum_possible_score;
    }
};