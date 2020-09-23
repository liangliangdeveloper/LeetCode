//
// Writen in 2020/09/23
// Problem 0013:Roman to Integer
// Difficulty:Easy
// Link:https://leetcode-cn.com/problems/roman-to-integer/
//
class Solution {
public:
    int romanToInt(string s) {
        int i;
        int ans = 0;
        for(i=0;i<s.size();i++){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    ans += 4;
                    i++;
                    continue;
                }else if(s[i+1]=='X'){
                    ans += 9;
                    i++;
                    continue;
                }else{
                    ans += 1;
                    continue;
                }
            }
            if(s[i]=='X'){
                if(s[i+1]=='L'){
                    ans += 40;
                    i++;
                    continue;
                }else if(s[i+1]=='C'){
                    ans += 90;
                    i++;
                    continue;
                }else{
                    ans += 10;
                    continue;
                }
            }
            if(s[i]=='C'){
                if(s[i+1]=='D'){
                    ans += 400;
                    i++;
                    continue;
                }else if(s[i+1]=='M'){
                    ans += 900;
                    i++;
                    continue;
                }else{
                    ans += 100;
                    continue;
                }
            }
            if(s[i]=='V') ans += 5;
            if(s[i]=='L') ans += 50;
            if(s[i]=='D') ans += 500;
            if(s[i]=='M') ans += 1000;
        }
        return ans;
    }
};
