//
// Writen in 2020/09/23
// Problem 0001:"Two Sum"
// Difficulty:Easy
// Link:https://leetcode-cn.com/problems/two-sum/
//
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i <= nums.size()-2; i++){
            for(int j = i+1;j<=nums.size()-1;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
