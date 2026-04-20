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

class Queue{
    public:
    Node* st = nullptr;
    Node* end = nullptr;
    int s = 0;
    void push(int val){
        if(st == nullptr && end == nullptr){
            Node* newNode = new Node(val);
            end = newNode;
            st = end;
            s++;
            cout << val << " pushed!\n";
        }
        else{
            Node* newNode = new Node(val);
            end->next = newNode;
            end = newNode;
            s++;
            cout << val << " pushed!\n";
        }
    }
    void pop(){
        if(st == NULL){
            cout << "underflow!";
        }
        else{
            Node* temp = st;
            st = st->next;
            cout << temp->data << " poped!" << endl;
            delete temp;
            s--;
        }
        if (st == nullptr) end = nullptr;
    }
    void top(){
        if(st == NULL){
            cout << "Empty queue!\n";
        }
        else{
            cout << "top element = " << st->data << endl;
        }
    }
    void size(){
        cout << s << endl;
    }
};

int main(){

}