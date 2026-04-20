#include <bits/stdc++.h>
//(double-ended queue) 
int main(){
    std::deque<int> dq = {3, 4};
    dq.push_back(2);//{2}
    dq.emplace_back(5);//{2, 5}
    dq.push_front(9);//{9, 2, 5}
    dq.emplace_front(10);//{10, 9, 2, 5}

    dq.pop_back();
    dq.pop_front();
    std::cout << dq.back();
    

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}