class CustomStack {
private:
    vector<int> stack;
    vector<int> inc;
    int top;
    int maxSize;

public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
        stack.resize(maxSize);
        inc.resize(maxSize, 0);
        top = -1;
    }
    
    void push(int x) {
        if (top == maxSize - 1) return;
        stack[++top] = x;
    }
    
    int pop() {
        if (top == -1) return -1;
        
        int result = stack[top] + inc[top];
        
        if (top > 0)
            inc[top - 1] += inc[top];
        
        inc[top] = 0;
        top--;
        
        return result;
    }
    
    void increment(int k, int val) {
        if (top == -1) return;
        
        int index = min(k - 1, top);
        inc[index] += val;
    }
};