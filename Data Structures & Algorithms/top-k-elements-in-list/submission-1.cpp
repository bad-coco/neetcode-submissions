typedef pair<int, int> pint;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> freq;
        priority_queue<pint, vector<pint>, greater<pint>> minHeap;
        
        for(auto& num:nums){
            freq[num]++;
        }
        for(auto& pair: freq){
            minHeap.push({pair.second, pair.first});
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;

        
    }
};


// 1:1
// 2:2
// 3:4