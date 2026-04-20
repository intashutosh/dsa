#include <bits/stdc++.h>

int main(){

    std::vector<int> t(5, 10);

    for (std::vector<int>::iterator it = t.begin(); it<t.end();it++){
        std::cout << *it << " ";
    }

    for(auto it = t.begin(); it < t.end(); it++){
        std::cout << *it << " ";
    }
    //for each loop
    for(auto it : t){
        std::cout << it << " ";
    }
}