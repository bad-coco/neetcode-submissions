typedef pair<int,int> pint;
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        priority_queue<pint, vector<pint>, greater<pint>> minHeap;
        for(int i=0;i<nums.size();i++){
            minHeap.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            pair min = minHeap.top();
            minHeap.pop();
            minHeap.push({min.first*multiplier,min.second });
            nums[min.second] = min.first*multiplier;
        }
        return nums;
         
    }
};