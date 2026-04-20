#include <bits/stdc++.h>

using namespace std;

class Queue{
    public:
    const static int n = 4;
    int arr[n];
    int s = 0;
    int st = -1;
    int end = -1;
    void push(int data){
        if(st == -1 && end == -1){
            arr[++end] = data;
            st++;
            s++;
            cout << data << "data is pushed\n";
        }
        else{
            if(s == n){
                cout << "overflow!";
            }
            else{
                end = (end+1)%n;
                arr[end] = data;
                s++;
                cout << data << "data is pushed\n";
            }
        }
    }
    void pop(){
        if(s == 0 || st == -1){
            cout << "underflow\n";
        }
        else if(s == 1){
            st = -1;
            end = -1;
            s--;
            cout << arr[0] << " is popped\n";
        }
        else{
            cout << arr[st] << " is popped\n";
            st = (st+1)%n;
            s--;
        }
    }
    void top(){
        if(st == -1){
            cout << "Empty queue!\n";
        }
        else{
            cout << arr[st] << endl;
        }
    }
    void size(){
        cout << s << endl;
    }
};

int main(){
    Queue q;
    q.push(5);
    q.push(8);
    q.push(1);
    q.pop();
    q.top();
    q.push(9);
    q.push(0);
    q.top();
}