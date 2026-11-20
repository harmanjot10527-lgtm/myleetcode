
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    // Push element
    void push(int x) {
        s1.push(x);
    }

    // Remove front element
    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

    // Return front element
    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    // Check if empty
    bool empty() {
        return s1.empty() && s2.empty();
    }
};
