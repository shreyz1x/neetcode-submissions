class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        for (int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        priority_queue<pair<int, int>> heap;

        for (auto num : count){
            heap.push({num.second, num.first});
        }

        vector<int> result;

        for (int i = 0; i < k; i++){
            result.push_back(heap.top().second);
            heap.pop();
        }

        return result;
    }
};