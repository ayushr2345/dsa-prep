class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // map<int, int> mp;
        // for (auto i: nums) {
        //     if (mp.find(i) == mp.end()) {
        //         mp[i] = 1;
        //     } else {
        //         mp[i]++;
        //     }
        // }

        // map<int, vector<int>> mpFreq;
        // for (auto ele: mp) {
        //     mpFreq[ele.second].push_back(ele.first);
        // }

        // vector<int> res;
        // for (auto i = mpFreq.rbegin(); i != mpFreq.rend(); i++) {
        //     if (res.size() <= k) {
        //         int remaining = k - res.size();
        //         if (remaining >= i->second.size()) {
        //             res.insert(res.end(), i->second.begin(), i->second.end());
        //         } else {
        //             res.insert(res.end(), i->second.begin(), i->second.begin() + remaining);
        //         }
        //     } else {
        //         break;
        //     }
        // }
        // return res;

        // Bucket Sort solution
        // unordered_map<int, int> mp;
        // vector<int> res;
        // for (auto i: nums) mp[i]++;

        // vector<vector<int>> bucket(nums.size() + 1);

        // for (auto ele: mp) bucket[ele.second].push_back(ele.first);

        // for (int i = bucket.size() - 1; i > 0 && res.size() < k; i--) {
        //     for (auto ele: bucket[i]) {
        //         res.push_back(ele);
        //         if (res.size() == k) break;
        //     }
        // }
        // return res;

        // Min Heap Solution
        unordered_map<int, int> mp;
        for (auto num: nums) mp[num]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (auto m: mp) {
            minHeap.push({m.second, m.first});
            if(minHeap.size() > k) minHeap.pop();
        }

        vector<int> res;
        while (!minHeap.empty()) {
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return res;
    }
};