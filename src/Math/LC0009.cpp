//
// Writen in 2020/09/23
// Problem 0009:Palindrome Number
// Difficulty:Easy
// Link:https://leetcode-cn.com/problems/palindrome-number/
//
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x < 10) return true;
        vector<int> num;
        while(x){
            num.push_back(x%10);
            x/=10;
        }
        for(int i = 0; i < num.size() / 2; i++){
            if(num[i] != num[num.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};
