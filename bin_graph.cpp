#include <bits/stdc++.h>

using namespace std;

struct Node{
    Node* right;
    Node* left;
    int data;
};

void preorder_traversal(Node* root){
    if(root != NULL){
        int data = root->data;
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}


int main(){

}