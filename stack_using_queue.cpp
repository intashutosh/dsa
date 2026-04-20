#include <bits/stdc++.h>

using namespace std;

class Stack{
    public:
    queue<int> q;
    void push(int data){
        q.push(data);
        int cnt = q.size();
        while(cnt != 1){
            int a = q.front();
            q.pop();
            q.push(a);
            cnt--;
        }
        cout << data << " pushed!\n";
    }
    void pop(){
        if(q.empty()){
            cout << "Empty stack\n";
        }
        else{
            cout << q.front() << " popped!\n";
            q.pop();
        }
    }
    void top(){
        cout << q.front() << " top element!\n";
    }
    void size(){
        cout << "size: " << q.size() << endl;
    }
};

int main(){
    Stack s;
    s.push(8);
    s.push(2);
    s.push(9);
    s.push(0);
    s.pop();
    s.pop();
    s.top();
    s.size();
    s.push(10);
    s.top();
}