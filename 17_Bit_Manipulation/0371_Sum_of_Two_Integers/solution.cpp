class Solution {
public:
    int getSum(int a, int b) {
        // Approach 1: bit by bit
        // int res = 0;
        // int carry = 0;
        // for (int i = 0; i < 32; i++) {
        //     int add = ( (1U << i) & a ) ^ ( (1U << i) & b );
        //     res |= add ^ carry;
        //     carry = add ? carry << 1 : (( (1U << i) & a ) & ( (1U << i) & b )) << 1;
        // }
        // return res;

        // Approach 2: better
        int res = 0;
        while (b != 0) {
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};