#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    int height;
    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
        height = 0;
    }
};
int calHeight(TreeNode* node){
    if(!node) return 0;
    return node->height;
}

int bf(TreeNode* node){
    if(!node) return 0;
    return calHeight(node->left)-calHeight(node->right);
}

TreeNode* RRRotation(TreeNode* node){
    TreeNode* temp = node->right;
    node->right = temp->left;
    temp->left = node;
    return temp;
}
TreeNode* LLRotation(TreeNode* node){
    TreeNode* temp = node->left;
    node->left = temp->right;
    temp->right = node;
    return temp;
}
TreeNode* insertAvl(TreeNode* root, int data){
    if(!root) return new TreeNode(data);
    if(root->val > data){
        root->left = insertAvl(root->left, data);
    }
    else{
        root->right = insertAvl(root->right, data);
    }
    root->height = 1+max(calHeight(root->left), calHeight(root->right));
    int balFactor = bf(root);
    if(balFactor > 1){
        int bf1 = bf(root->left);
        if(bf1 < 0){
            root->left = LLRotation(root->left);
        }
        return RRRotation(root);
    }
    else if(balFactor < -1){
        int bf1 = bf(root->right);
        if(bf1 > 0){
            root->right = RRRotation(root->right);
        }
        return LLRotation(root);
        
    }
    return root;
}

int main(){
    
}