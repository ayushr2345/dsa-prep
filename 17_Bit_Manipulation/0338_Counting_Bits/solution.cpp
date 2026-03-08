class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1, 0);

        // Approach 1: O(n log n)
        // for (int i = 0; i <= n; i++) {
        //     int num1s = 0;
        //     for (int j = 0; j < 32; j++) {
        //         if ((1 << j) & i) {
        //             num1s++;
        //         }
        //     }
        //     res[i] = num1s;
        // }

        // Approach 2: O(N log N) - using builtin function
        // for (int i = 0; i <=  n; i++) {
        //     res[i] = __builtin_popcount(i);
        // }

        // Approach 3: using DP O(N)
        res[0] = 0;
        int offset = 1;
        for (int i = 1; i <= n; i++) {
            if (2 * offset == i) {
                offset = offset * 2;
            }
            res[i] = 1 + res[i - offset];
        }
        return res;
    }
};