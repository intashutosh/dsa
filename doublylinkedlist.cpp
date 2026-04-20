#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convert2dll(vector<int> arr){
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<n;i++){
        Node* newNode = new Node(arr[i]);
        newNode->back = temp;
        temp->next = newNode;
        temp = newNode;
    }
    temp->next = NULL;
    return head;
}
// //deletion
// //deletion of head
// Node* deletionofhead(Node* head){
//     Node* temp = head;
//     head = temp->next;
//     head->back = NULL;
//     temp->next = NULL;
//     delete temp;
//     return head;
// }

// //deletion of last
// Node* deletionoflast(Node* head){
//     if(head == NULL || head->next == NULL){
//         return NULL;
//     }
//     Node* temp = head;
//     while(temp){
//         if(temp->next->next == NULL){
//             temp->next->back = NULL;
//             delete temp->next;
//             temp->next = NULL;
//             return head;
//         }
//         temp = temp->next;
//     }
//     return head;
// }
// //deletion of kth element
// Node* deletionbyposition(Node* head, int k){
//     // Node* temp = head;
//     // if(head == NULL){
//     //     return head;
//     // }
//     // if(k==1){
//     //     head = temp->next;
//     //     head->back = NULL;
//     //     temp->next = NULL;
//     //     delete temp;
//     //     return head;
//     // }
//     // int cnt =0;
//     // while(temp->next != NULL){
//     //     cnt++;
//     //     if(cnt == k){
//             // temp->back->next = temp->next;
//             // temp->next->back = temp->back;
//             // temp->next = NULL;
//             // temp->back = NULL;
//             // delete temp;
//             // return head;
//     //     }
//     //     temp = temp->next;
//     // }
//     // if(temp->next == NULL){
//     //     if(cnt == (k-1)){
//     //         temp->back->next = NULL;
//     //         temp->back = NULL;
//     //         delete temp;
//     //         return head;
//     //     }
//     // }
//     // return head;
//     if(head == NULL){
//         return head;
//     }
//     Node* temp = head;
//     if(k==1){
//         temp->next->back = NULL;
//         temp->next = NULL;
//         delete temp;
//         return head;
//     }
//     int cnt = 1;
//     while(temp != NULL && cnt < k){
//         temp = temp->next;
//         cnt++;
//     }
//     if(temp!= NULL){
//         temp->back->next = temp->next;
//         temp->next->back = temp->back;
//         temp->next = NULL;
//         temp->back = NULL;
//         delete temp;
//         return head;
//     }
// }

// //delete Node
// Node* deletenode(Node* head, Node* node){
//     Node* temp = head;
//     if(node == NULL || head == NULL){
//         return;
//     }
//     while(temp){
//         if(temp->next == node->next && node->back == temp->back){
//             temp->back->next = temp->next;
//             temp->next->back = temp->back;
//             temp->back = NULL;
//             temp->next = NULL;
//             return head;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

//insertion of node
//insert at head

Node* insertatfront(Node* head, int value){
    if(head == NULL){
        return new Node(value);
    }
    Node* temp = head;
    Node* newnode = new Node(value);
    newnode->next = temp;
    temp->back = newnode;
    head = newnode;
    return head;
}

//insert at the end

Node* insertatend(Node* head, int value){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newEnd = new Node(value);
    temp->next = newEnd;
    newEnd->back = temp;
    return head;
}

//insert at the kth index

Node* insertbyposition(Node* head, int value, int k){
    if(k==1){
        if(head == NULL){
            return new Node(value);
        }
        else{
            Node* newNode = new Node(value, head, NULL);
            head->back = newNode;
            return newNode;
        }
    }
    int cnt = 1;
    Node* temp = head;
    while(temp->next != NULL && cnt < k){
        cnt++;
        temp = temp->next;
    }
    Node* newNode = new Node(value);
    if(temp != NULL && cnt == k){
        Node* prev = temp->back;
        prev->next = newNode;
        newNode->back = prev;
        newNode->next = temp;
        return head;
    }
    else if (cnt == k-1){
        temp->next = newNode;
        newNode->back = temp;
        return head;
    }
    return head;

}
//reverse a dll
//by left and right pointer
Node* reversedll(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* left = head;
    Node* right = head;
    while(right->next != NULL){
        right = right->next;
    }
    while(right != left && left->back != right){
        int temp = left->data;
        left->data = right->data;
        right->data = temp;
        left = left->next;
        right = right->back;
    }
    return head;
}
//by swapping links
Node* reverse(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* cur = head;
    Node* prev = NULL;
    while(cur!=NULL){
        Node* last = cur->back;
        cur->back = cur->next;
        cur->next = last;
        prev = cur;
        cur = cur->back;
    }
    return prev;
}

int main(){
    vector<int> arr = {2, 3, 5, 7};
    Node* head = convert2dll(arr);
    Node* temp = reverse(head);
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
