#include<string.h>
class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (auto str: strs) {
            int size = str.size();
            res.append(std::bitset<32>(size).to_string());
            res.append(str);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        cout << s << s.size() << "\n"; 
        while (i < s.size()) {
            string strLen = s.substr(i, i + 32);
            std::bitset<32> strLenBits(strLen);
            cout << strLen << "\n";
            string str = s.substr(i + 32, strLenBits.to_ulong());
            cout << str << "\n";
            res.push_back(str);
            i = i + 32 + strLenBits.to_ulong();
            cout << i;
        }
        return res;
    }
};
