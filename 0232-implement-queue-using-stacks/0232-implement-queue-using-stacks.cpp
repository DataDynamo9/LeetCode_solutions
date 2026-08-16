class MyQueue {
    stack<int>st;
    stack<int>ts;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
         while(!st.empty()){
            ts.push(st.top());
            st.pop();
         }
         int ans=ts.top();
          ts.pop();
         while(!ts.empty()){
            st.push(ts.top());
            ts.pop();
         }
         return ans;
    
    }
    int peek() {
          while(!st.empty()){
            ts.push(st.top());
            st.pop();
         }
         int ans=ts.top();
        
         while(!ts.empty()){
            st.push(ts.top());
            ts.pop();
         }
         return ans;
       
    }
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */