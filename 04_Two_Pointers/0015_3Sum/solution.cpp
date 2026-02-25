class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // fixing an element and using two sum approach
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int low = i + 1;
            int high = nums.size() - 1;
            int mid = 0;
            while (low < high) {
                int sum = x + nums[low] + nums[high];
                if (sum > 0) {
                    high--;
                } else if (sum < 0) {
                    low++;
                } else if (sum == 0) {
                    res.push_back({nums[i], nums[low], nums[high]});
                    cout << nums[i] << " " << nums[low] << " " << nums[high] << " " << "\n";
                    high--;
                    low++;
                    while (low < high && nums[low] == nums[low - 1]) {
                        low++;
                    }
                }
            }
        }
        
        return res;
    }
};