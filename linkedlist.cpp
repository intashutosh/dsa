#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertarr2LL(vector<int> arr){
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int findlength(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int findel(Node* head, int target){
    Node* temp = head;
    while(temp){
        if(temp->data == target) return 1;
        temp = temp->next;
    }
    return 0;
}
Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = nullptr;
    return head;
}

//based on position
Node* deletebyposition(Node* head, int k){
    int n = findlength(head);
    Node* temp = head;
    if(k == 1){
        if(head == NULL){
            return NULL;
        }
        head = temp->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp1;
    while(temp){
        cnt++;
        if(cnt == k){
            temp1->next = temp->next;
            free(temp);
            return head;
        }
        temp1 = temp;
        temp = temp->next;
    }
    return head;
}
//based on value

Node* deletebyvalue(Node* head, int value){
    Node* temp = head;
    if(head == NULL){
        return NULL;
    }
    if(head->data == value){
        head = temp->next;
        delete temp;
        return head;
    }
    Node* prev = NULL;
    while(temp){
        if(temp->data == value){
            prev->next = temp->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

//insertion
//insertion of head
Node* insertionofhead(Node* head, int value){
    Node* newhead;
    newhead->data = value;
    newhead->next = head;
    return newhead;
}
//insertion at last
Node* insertionatlast(Node* head, int value){
    Node* newel;
    newel->data = value;
    Node* temp = head;
    while(temp){
        if(temp->next == NULL){
            newel->next = NULL;
            temp->next = newel;
            return head;
        }
        temp = temp->next;
    }
    return head;
}
//insertion at given position
Node* insertionatposition(Node* head, int k, int value){
    int n = findlength(head);
    Node* newel = new Node(value);
    if(k==1){
        newel->next = head;
        newel->data = value;
        head = newel;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        cnt++;
        if(cnt == k){
            newel->next = temp;
            newel->data = value;
            prev->next = newel;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    newel->next = NULL;
    prev->next = newel;
    return head;
}

int main(){
    vector<int> arr = {2, 3, 5, 7};
    Node*  head = convertarr2LL(arr);
    Node* temp = insertionatposition(head, 7, 20);
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}