class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int longest = 1;
        unordered_set<int> st(nums.begin(), nums.end());

        for (auto num : st) {
            int cnt = 1;
            if (st.find(num - 1) == st.end()) {
                while (st.find(num + 1) != st.end()) {
                    cnt++;
                    num++;
                }
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};

// nums: [2,20,4,10,3,4,5]
// st. : [2,20,4,10,3,4,5]