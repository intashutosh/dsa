#include <bits/stdc++.h>

using namespace std;

struct Node{
    Node* arr[26];
    bool flag = false;
    bool isPresent(char c){
        if(arr[c-'a'] != NULL) return true;
        return false;
    }
    void put(Node* node, char c){
        arr[c] = node;
    }
    Node* get(char c){
        return arr[c-'a'];
    }
    bool isEnd(){
        return flag;
    }
};

class Trie{
    Node* root;
    Trie(){
        root = new Node();
    }
    public:
    void insert(string s){
        Node* node = root;
        for(int i=0;i<s.size();i++){
            if(!node->isPresent(s[i])){
                node->put(new Node(), s[i]);
            }
            node = node->get(s[i]);
        }
        node->flag = true;
    }
    bool search(string s){
        Node* node = root;
        for(int i=0;i<s.size();i++){
            if(!node->isPresent(s[i])) return false;
            node = node->get(s[i]);
        }
        return node->isEnd();
    }
    bool startsWith(string s){
        Node* node = root;
        for(int i=0;i<s.size();i++){
            if(!node->isPresent(s[i])) return false;
            node = node->get(s[i]);
        }
        return true;
    }
};