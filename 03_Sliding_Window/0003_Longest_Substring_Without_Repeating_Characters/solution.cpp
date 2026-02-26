class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> tmp;
        int maxLen = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++) {
            while (tmp.count(s[i])) {        
                tmp.erase(s[left]);
                left++;
            }
            tmp.insert(s[i]);
            int size = tmp.size();
            maxLen = max(size, maxLen);
        }
        return maxLen;
    }
};