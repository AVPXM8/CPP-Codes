// Leetcode 36. Single Number
// https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int axor = 0;
        for (auto i : nums) {
            axor = axor ^ i;
        }
        return axor;
    }
};