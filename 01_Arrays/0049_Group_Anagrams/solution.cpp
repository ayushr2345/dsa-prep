class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        map<string, vector<string>> mp;
        for (auto str: strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            mp[sortedStr].push_back(str);
        }

        for (auto m: mp) {
            result.push_back(m.second);
        }
        return result; 
    }
};