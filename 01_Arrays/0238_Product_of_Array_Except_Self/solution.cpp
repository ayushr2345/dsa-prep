class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Approach 1: using prefix and suffix multiplication array
        // vector<int> prefixMultiplication;
        // vector<int> suffixMultiplication;

        // for (int i = 0; i < nums.size(); i++) {
        //     prefixMultiplication.push_back(i == 0 ? 1 : prefixMultiplication[i - 1] * nums[i - 1]);
        //     cout << prefixMultiplication[i];
        // }
        // cout << "\n";

        // for (int i = nums.size() - 1; i >= 0; i--) {
        //     suffixMultiplication.insert(suffixMultiplication.begin(), i == nums.size() - 1 ? 1 : suffixMultiplication[0] * nums[i + 1]);
        //     cout << suffixMultiplication[0];
        // }

        // vector<int> res;
        // for (int i = 0; i < nums.size(); i++) {
        //     res.push_back(prefixMultiplication[i] * suffixMultiplication[i]);
        // }
        // return res;

        // Approach 2: Using O(1) space
        int leftProduct = 1;
        int rightProduct = 1;
        vector<int> res(nums.size(), 1);

        for (int i = 0; i < nums.size(); i++) {
            res[i] = leftProduct;
            leftProduct *= nums[i];
            cout << res[i];
        }
        cout << "\n";
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= rightProduct;
            rightProduct *= nums[i];
            cout << res[i];
        }
        return res;
    }
};