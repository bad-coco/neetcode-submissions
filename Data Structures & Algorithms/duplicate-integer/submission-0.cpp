class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        return set(nums.begin(),nums.end()).size()<nums.size();
    }
};