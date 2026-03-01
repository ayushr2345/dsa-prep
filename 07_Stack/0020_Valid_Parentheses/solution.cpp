class Solution {
public:
    bool isValid(string s) {
        // stack<char> tmp;
        // for (int i = 0; i < s.size(); i++) {
        //     if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
        //         tmp.push(s[i]);
        //     } else {
        //         if (tmp.empty()) return false;
        //         auto popped = tmp.top();
        //         tmp.pop();
        //         if ((s[i] == ')' && popped == '(') || (s[i] == '}' && popped == '{') || (s[i] == ']' && popped == '[')) {
        //             continue;
        //         } else {
        //             return false;
        //         }
        //     }
        // }
        // if (!tmp.empty()) return false;
        // return true;

        // other approach
        stack<char> tmp;
        for (auto c: s) {
            if (c == '(') {
                tmp.push(')');
            } else if (c == '{') {
                tmp.push('}');
            } else if (c == '[') {
                tmp.push(']');
            } else {
                if (tmp.empty() || tmp.top() != c) {
                    return false;
                }
                tmp.pop();
            }
        }
        return tmp.empty();
    }
};
