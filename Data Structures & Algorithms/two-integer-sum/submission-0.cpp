class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indexs;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(indexs[diff]!=0){
                return {indexs[diff]-1, i};
            }
            else{
                indexs[nums[i]]=i+1;
            }
        }
        return {-1,-1};
        
    }
};
