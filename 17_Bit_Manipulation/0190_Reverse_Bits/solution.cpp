class Solution {
public:
    int reverseBits(int n) {
        // Approach 1: Using bitset, O(1)
        // std::bitset<32> res(0);
        // for (int i = 0; i < 32; i++) {
        //     cout << (1 << i) << '\n';
        //     if ((1 << i) & n) {
        //         res[31 - i] = 1;
        //     } else {
        //         res[31 - i] = 0;
        //     }
        // }
        // return static_cast<int>(res.to_ulong());

        // Approach 2: Still O(1)
        uint32_t res = 0;
        for (int i = 0; i < 32; i++) {
            res = res << 1;
            if ((1U << i) & n) {
                res |= 1U;
            }
        }
        return res;
    }
};