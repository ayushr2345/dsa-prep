class MinStack {
    int minimum = INT_MAX;
    stack<pair<int, int>> s;
public:
    MinStack() {
    }
    
    void push(int val) {
        minimum = min(minimum, val);
        s.push({val, minimum});
    }
    
    void pop() {
        s.pop();
        if (!s.empty()) minimum = s.top().second;
        if (s.empty()) minimum = INT_MAX;
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */