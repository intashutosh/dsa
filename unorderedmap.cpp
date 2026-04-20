#include <bits/stdc++.h>

int main(){
    std::unordered_map<int , int> ump;
    //similar to map but it is not sorted it contains randomised key and values
    ump.emplace(9, 4);
    std::cout << ump[9]; 
}