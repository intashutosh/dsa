#include <bits/stdc++.h>

using namespace std;

struct Node{
    Node* left;
    Node* right;
    int data;
    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

Node* create_tree(){
    Node* newNode = new Node(NULL);
    cout << "Enter data: ";
    cin >> newNode->data;
    cout << "data entered";
    char choice = 'y';
    cout << "You want to enter the data y/n: ";
    cin >> choice;
    string path;
    if(choice == 'y'){
        cout << "left or right";
        cin >> path;
    }
    if(path == ){

    }
    
}

int main(){
    
}