
// 1.you are give palindromice string 
// 2.you have to convert into the non-palindromice string 
// 3.but you have to replaced the char lexigraphically order 'a','b','c'

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        if(n == 1){
            // return empty string
            return "";
        }
        for(int i = 0; i<n/2; i++){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        
        palindrome[n-1] = 'b';
        return palindrome;
    }
};