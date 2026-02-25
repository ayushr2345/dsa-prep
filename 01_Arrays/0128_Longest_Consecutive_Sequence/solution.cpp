class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto num: nums) pq.push(num);
        int prev = 0;
        int flag = 0;
        int res = 0;
        int resMax = 0;
        while (!pq.empty()) {
            if (flag == 0) {
                prev = pq.top() - 1;
                flag = 1;
            }
            if (prev + 1 == pq.top()) {
                prev = pq.top();
                res++;
            } else if (prev == pq.top()) {
                prev = pq.top();
            } else {
                resMax = resMax > res ? resMax : res;
                prev = pq.top();
                res = 1;
            }
            pq.pop();
        }
        return (res > resMax) ? res : resMax;
    }
};