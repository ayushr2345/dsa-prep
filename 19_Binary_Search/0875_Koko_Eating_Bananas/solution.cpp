class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxK = *max_element(piles.begin(), piles.end());
        
        int res = maxK;
        int low = 1;
        int high = maxK;
        int mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;

            long long int hoursRequired = 0;
            for (auto x: piles) {
                hoursRequired += ceil(static_cast<double>(x) / mid);
            }
            if (hoursRequired <= h) {
                res = mid;
                high = mid - 1;
            } else if (hoursRequired > h) {
                low = mid + 1;
            }
        }
        return res;
    }
};