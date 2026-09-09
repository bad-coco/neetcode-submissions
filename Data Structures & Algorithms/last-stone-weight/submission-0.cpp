class Solution {
    priority_queue<int> maxHeap;

   public:
    int lastStoneWeight(vector<int>& stones) {
        for (auto stone : stones) {
            maxHeap.push(stone);
        }
        while (maxHeap.size() > 1) {
            simulation();
        }
        if(maxHeap.size()==1) return maxHeap.top();
        return 0;
    }

    void simulation() {
        int x = maxHeap.top();
        maxHeap.pop();
        int y = maxHeap.top();
        maxHeap.pop();
        int newWeight = x >= y ? x - y : y - x;
        if (newWeight != 0) {
            maxHeap.push(newWeight);
        }
    }
};
