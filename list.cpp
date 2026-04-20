#include <bits/stdc++.h>

int main(){
    std::list<int> t;
    t.push_back(2);//{2}
    t.emplace_back(5);//{2, 5}
    t.push_front(9);//{9, 2, 5}
    t.emplace_front(10);//{10, 9, 2, 5}
    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}