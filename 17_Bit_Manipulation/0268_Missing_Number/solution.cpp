class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Approach 1: Xor complete and incomplete XOR results - 0(N), 0(N) space also
        // vector<int> vec(nums.size() + 1, 0);
        // int xorComplete = 0;
        // for (int i = 0; i < vec.size(); i++) {
        //     vec[i] = i;
        //     xorComplete ^= vec[i];
        // }

        // int xorIncomplete = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     xorIncomplete ^= nums[i];
        // }
        // return xorComplete ^ xorIncomplete;

        // Approach 2: O(N) and O(1) space
        // int xorComplete = 0;
        // int i = nums.size();
        // if ((i + 1) % 4 == 0) {
        //     xorComplete = 0;
        // } else if ((i - 1) % 4 == 0) {
        //     xorComplete = 1;
        // } else if (i % 4 == 0) {
        //     xorComplete = i;
        // } else {
        //     xorComplete = i + 1;
        // }
        // cout << xorComplete << '\n';
        // int xorIncomplete = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     xorIncomplete ^= nums[i];
        // }
        // return xorComplete ^ xorIncomplete;

        // Approach 3:
        // Since in approach 1 & 2, we are just XORing all the elements, there are 2 arrays, one in complete
        // another is incomplete, if we xor all of them ,we get the missing one

        int res = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            res ^= i ^ nums[i];
        }
        return res;
    }
};