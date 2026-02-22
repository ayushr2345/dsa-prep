class Solution {
public:
    bool isAnagram(string s, string t) {
        // a - 97
        // z - 122
        int ch[26] = {0};
        for (auto letter: s) {
            ch[(int)letter - 97]++;
        }
        for (auto letter: t) {
            ch[(int)letter - 97]--;
        }
        for (auto i: ch) {
            if (i != 0) return false;
        }
        return true;
    }
};