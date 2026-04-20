#include <bits/stdc++.h>
using namespace std;


int main(){
    //sorted but not unique
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    // cout << ms.count(1);
    // ms.erase(1); // erases all occurences of 1;
    //to erase one or required number of occurences we use iterator
    for(int i=0;i<2;i++){
        ms.erase(ms.find(1));
    }
    for(int j : ms){
        cout << j << " ";
    }

}