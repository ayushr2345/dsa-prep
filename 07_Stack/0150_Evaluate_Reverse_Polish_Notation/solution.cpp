class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> tmp;
        for (auto st: tokens) {
            if (st == "+" || st == "-" || st == "*" || st == "/") {
                if (!tmp.empty()) {
                    int x = tmp.top();
                    tmp.pop();
                    int y = tmp.top();
                    tmp.pop();
                    int res = 0;
                    if (st == "+") res = x + y;
                    else if (st == "-") res = y - x;
                    else if (st == "*") res = x * y;
                    else if (st == "/") res = y / x;
                    tmp.push(res);
                }
            } else {
                tmp.push(stoi(st));
            }
        }
        return tmp.top();
    }
};