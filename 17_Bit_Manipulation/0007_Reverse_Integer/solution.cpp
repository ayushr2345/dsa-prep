class Solution {
public:
    int reverse(int x) {
        // if (x == INT_MIN) return 0;
        // int res = 0;
        // int y = abs(x);
        // while (y) {
        //     int digit = y % 10;
        //     if (res > ((INT_MAX - digit) / 10) || res < ((INT_MIN + digit) / 10)) {
        //         return 0;
        //     }
        //     res = res * 10 + digit;
        //     y = y / 10;
        // }
        // return x < 0 ? -res : res;

        // another approach
        int res = 0;
        while (x) {
            int digit = x % 10;
            
            // standard check
            // INT_MAX last digit is 7
            // INT_MIN last digit is 8
            if (res > INT_MAX / 10 || (res == INT_MAX && digit > 7)) return 0;
            if (res < INT_MIN / 10 || (res == INT_MIN && digit > 8)) return 0;
            res = res * 10 + digit;
            x = x / 10;
        }
        return res;
    }
};