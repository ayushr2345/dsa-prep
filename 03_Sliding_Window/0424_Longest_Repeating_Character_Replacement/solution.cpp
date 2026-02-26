class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> hash(26,0);
        int left = 0;
        int maxFreq = 0;
        int maxLength = 0;
        for (int right = 0; right < s.size(); right++) {
            int val = s[right] - 'A';
            hash[val]++;
            maxFreq = max(maxFreq, hash[val]);      
            while (right - left + 1 - maxFreq > k) {
                int val = s[left] - 'A';
                hash[val]--;
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};