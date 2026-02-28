class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size()) return false;

        vector<char> tmpS1(26, 0);
        vector<char> tmpS2(26, 0);
        int left = 0;

        for (int i = 0; i < s1.size(); i++) {
            int val = s1[i] - 'a';
            tmpS1[val]++;
        }
        for (int right = 0; right < s2.size(); right++) {
            int rightVal = s2[right] - 'a';
            tmpS2[rightVal]++;

            while ((right - left + 1) > s1.size()) {
                int leftVal = s2[left] - 'a';
                tmpS2[leftVal]--;
                left++;
            }
            if (tmpS1 == tmpS2) return true;
        }
        return false;
    }
};