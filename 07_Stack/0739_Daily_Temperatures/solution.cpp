class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> tmp;
        for (int i = 0; i < temperatures.size(); i++) {
            while (!tmp.empty() && temperatures[i] > tmp.top().first) {
                auto t = tmp.top();
                tmp.pop();
                res[t.second] = i - t.second;
            }
            tmp.push({temperatures[i], i});
        }
        return res;
    }
};