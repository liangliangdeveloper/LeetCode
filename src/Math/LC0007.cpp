//
// Writen in 2020/09/23
// Problem 0007:Reverse Integer
// Difficulty:Easy
// Link:https://leetcode-cn.com/problems/reverse-integer/
//
class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x != 0){
            ans = ans * 10 + x % 10;
            x /= 10;
            if(ans > INT_MAX || ans < INT_MIN) return 0;
        }
        return ans;
    }
};
