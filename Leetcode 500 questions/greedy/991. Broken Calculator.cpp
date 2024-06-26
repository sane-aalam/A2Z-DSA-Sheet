
// as you know, This questions you are give two conditon
// 1. multiply the number by 2 (startvalue)
// 2. subtract by 1 into startvalue
// to make equal to targetValue 

// can we think reverse order
// 1. mulitpy -> divison
// 2. subtrack by 1 -> addtion by 1
//   Now we fill achieve traget value -> startValue
// find out ===>> the minimum number of operations needed to display target on the calculator.

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
        // if both are equal no operations required
        if(startValue == target){
            return 0;
        }
        
        if(startValue > target){
            return startValue - target;
        }
        
        if(target % 2 == 0){
            return 1 + brokenCalc(startValue, target/2);
        }else{
            return 1 + brokenCalc(startValue, target+1);
        }
    }
};