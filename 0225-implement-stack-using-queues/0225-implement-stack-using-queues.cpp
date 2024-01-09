#include <deque>

class MyStack {
public:
    MyStack() {
    }
    
    void push(int x) {
        dq.push_back(x);
    }
    
    int pop() {
        int res = dq.back();
        dq.pop_back();
        return res;
    }
    
    int top() {
        return dq.back();
    }
    
    bool empty() {
        if (dq.empty())
            return true;
        return false;
    }
    
private:
    std::deque<int> dq;    
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */