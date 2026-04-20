#include <bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

void insert_node(Node*& head, int data){
    Node* nn = new Node();
    nn->val = data;
    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL){
        if(temp->val >= data){
            prev = temp;
            temp = temp->left;
        }
        else if(temp->val < data){
            prev = temp;
            temp = temp->right;
        }
    }
    if(prev != NULL){
        if(data <= prev->val){
            prev->left = nn;
        }
        else{
            prev->right = nn;
        }
    }
    else{
        head = nn;
    }

}


//recursive search
Node* search_node(Node* head, int data){
    if(!head){
        cout << "element not found";
        return NULL;
    }
    if(head->val > data){
        Node* node = search_node(head->left, data);
        return node;

    }
    else if(head->val < data){
        Node* node = search_node(head->right, data);
        return node;
    }
    else{
        return head;
    }
}

//iterative search

Node* search_node_it(Node* head, int data){
    Node* temp = head;
    while(temp){
        if(head->val == data){
            break;
        }
        else if(head->val > data){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    if(!temp){
        cout << "el not found\n";
    }
    return temp;
}


//by recursion

Node* inorder_successor(Node* head){
    Node* temp = head;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

void del_node_rec(Node*& head, int data){
    if(!head) return;
    if(head->val == data){
        if(head->left && head->right){
            Node* in_succ = inorder_successor(head->right);
                int temp = head->val;
                head->val = in_succ->val;
                in_succ->val = temp;
            del_node_rec(head->right, data);
        }
        else{
            head = head->left ? head->left : head->right;
        }
    }
    else if(head->val > data){
        del_node_rec(head->left, data);
    }
    else if(head->val < data){
        del_node_rec(head->right, data);
    }
}

//by iteration
void del_node_it(Node*& head, int data){
    Node* temp = head;
    while(temp){
        if(head->val > data){
            temp = temp->left;
        }
        else if(head->val < data){
            temp = temp->right;
        }
        else{
            if(!head->left && !head->right){
                delete temp;
                temp = NULL;
            }
        }
    }
}

int main(){
    Node* head = NULL;
    insert_node(head, 20);
    insert_node(head, 15);
    insert_node(head, 25);
    insert_node(head, 10);
    insert_node(head, 16);
    insert_node(head, 23);
    insert_node(head, 30);
    insert_node(head, 22);
    insert_node(head, 24);
    insert_node(head, 40);
    Node* node = search_node_it(head, 100);
    if(node)
    cout << "a " << node->val << " a";
    queue<Node*> q;
    q.push(head);
    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node* node = q.front();
            std::cout << node->val << " ";
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        std::cout << endl;
    }
}