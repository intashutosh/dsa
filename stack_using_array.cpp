#include <bits/stdc++.h>

using namespace std;

class st{
    public:
    int arr[100];
    static int top;
    void pu(int data){
        if(top >= 99){
            cout << "overflow\n";
        }
        else{
            arr[++top] = data;
            cout << data << " added to the stack\n";
        }
    }
    void po(){
        if(top < 0){
            cout << "underflow\n";
        }
        else{
            cout << arr[top--] << "popped from the stack\n";
        }
    }
    void siz(){
        cout << "size: "  << top+1 << "\n";
    }
    int to(){
        if(top == -1){
            cout << "empty stack\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }
};

int st::top = -1;

int main(){
    st s;
    s.pu(8);
    s.pu(5);
    s.pu(9);
    s.po();
    int a  = s.to();
    cout << a;
}