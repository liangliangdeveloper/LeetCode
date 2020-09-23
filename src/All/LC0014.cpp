//
// Writen in 2020/09/23
// Problem 0014:Longest Common Prefix
// Difficulty:Easy
// Link:https://leetcode-cn.com/problems/longest-common-prefix/
//
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int snum = strs.size();
        int min = INT_MAX;
        bool brk = false;
        bool isOk = true;
        string ans;
        if(snum == 0) return "";

        for(int j = 0;;j++){
            char tmp;
            isOk = true;
            for(int i = 0; i < snum; i++){
                if(strs[i].size() == 0){
                    brk = true;
                    isOk = false;
                    break;
                }
                if(i==0) {
                    tmp = strs[0][j];
                }
                if(tmp != strs[i][j]){
                    brk = true;
                    isOk = false;
                    break;
                }
                if(j == strs[i].size()-1){
                    brk = true;
                }
            }
            if(isOk) ans += tmp;
            if(brk) break;
            
        }
        return ans;
    }
};
