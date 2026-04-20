#include <bits/stdc++.h>

int main(){
    std::vector<int> t;
    t.emplace_back(10);
    t.emplace_back(20);
    t.emplace_back(23);
    t.emplace_back(64);
    //{10, 20, 23, 64}
    // t.erase(t.begin()+1);//{10, 23, 64}
    //{10, 20, 30, 40, 50}
    t.erase(t.begin()+1, t.begin()+4);//{10, 50}(start, end)
    // t.erase()
    for(std::vector<int>::iterator it = t.begin(); it <t.end(); it++){
        std::cout << *it << " ";
    }
}