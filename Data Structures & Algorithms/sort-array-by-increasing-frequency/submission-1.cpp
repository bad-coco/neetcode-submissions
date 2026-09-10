 
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int> freq;
         
        for(int num:nums){
            freq[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a,int b){
            if(freq[a]!=freq[b]){
                return freq[a] < freq[b];
            }
            else{
                return a>b;
            }
        });

        
        return nums;

    }
};


// 1,1,2,2,2,3
// 1->2
// 2->3
// 3->1

// 3 , 1 , 1 , 2, 2