#include <bits/stdc++.h>
using namespace std;

int main(){
    //in set everythig happens in a logarithmic time complexity (logN)
    set<int> s;
    s.insert(1);//{1}
    s.emplace(2);//{1, 2}
    s.insert(2);//{1, 2}
    s.insert(4);//{1, 2, 4}
    s.insert(3);//{1, 2, 3, 4}
    //functionallity of insert can also be used, 
    //that only increses efficiency

    //begin(), end(), size, empty and swap are all same as vector

    //{1, 2, 3, 4}
    // set<int>::iterator it = s.find(3);
    // auto it1 = s.find(4);

    // s.erase(3);//{1, 2, 4}// takes logarithmic tzime

    // int cn1 = s.count(1);
    // cout << cn1 << "\n";
    // int cn3 = s.count(3);
    // cout << cn3 << "\n";

    // //{1, 2, 4}
    // auto it2 = s.find(1);
    // s.erase(it2); //{2, 4}

    // set<int> s2 = {1, 2, 3, 4, 5};
    // auto it3 = s2.find(2);
    // auto it4 = s2.find(5);
    // s2.erase(it3, it4);//{1, 5};

    for(auto it5 : s){
        cout << it5 << " ";
    }
    // cout << s.size();

}