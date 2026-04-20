#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
class Stack{
    public:
    Node* top = new Node(NULL);
    int s = 0;
    Stack() {
        top = nullptr;
    }
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        s++;
        cout << val << " pushed!\n";
        
    }
    void pop(){
        if(top == nullptr){
            cout << "underflow\n";
        }
        else{
            cout << top->data << " popped!\n";
            Node* temp = top;
            top = top->next;
            delete temp;
            s--;
        }
    }
    void top_element(){
        if(top == nullptr){
            cout << "Empty stack!\n";
        }
        else{
        cout << top->data;
        }
    }
    void size(){
        cout << "size: " << s << endl;
    }
};

int main(){
    Stack s;
    s.push(4);
    s.push(9);
    s.push(20);
    s.pop();
    s.top_element();
}