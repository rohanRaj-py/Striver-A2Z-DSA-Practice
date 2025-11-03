// A phrase is a palindrome if, after converting all uppercase letters 
// into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
class Solution {
public:
    char upperToLower(char ch){
        if(ch>='A' &&  ch<='Z'){
            return (ch-'A'+'a');
        }
       return ch;
    }
    bool solve(string& s,int i,int j){
        if(i>=j){
            return true;
        }
        if(isalnum(s[i]) && isalnum(s[j])){
            if(upperToLower(s[i]) != upperToLower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        if(!isalnum(s[i])){
            i++;
        }
        if(!isalnum(s[j])){
            j--;
        }
        return solve(s,i,j);
}
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
       
        return solve(s,i,j);
    }
};
