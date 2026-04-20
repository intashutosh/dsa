#include <bits/stdc++.h>

using namespace std;

class Queue{
    public:
    stack<int> s1;
    stack<int> s2;
    void push(int data){
        s2.push(data);
        stack<int> temp;
        s1 = temp;
        temp = s2;
        while(!temp.empty()){
            s1.push(temp.top());
            temp.pop();
        }
        cout << data << " pushed!\n";
    }
    void pop(){
        if(s1.empty()){
            cout << "Empty stack\n";
        }
        else{
            cout << s1.top() << " popped!\n";
            s1.pop();
        }
    }
    void to(){
        cout << s1.top() << " top element!\n";
    }
    void size(){
        cout << "size: " << s1.size() << endl;
    }
};

int main(){
    Queue s;
    s.push(8);
    s.push(2);
    s.push(9);
    s.push(0);
    s.pop();
    s.pop();
    s.to();
    s.size();
    s.push(10);
    s.to();
}