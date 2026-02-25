class Solution {
public:
    bool isPalindrome(string s) {
        string conv;
        for (auto ch: s) {
            if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57)) {
                ch > 90 ? conv.push_back(ch) : conv.push_back(ch + 32);
            }
        }

        int i = 0;
        int j = conv.size() - 1;
        while (i < j) {
            if (!(conv[i] == conv[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};