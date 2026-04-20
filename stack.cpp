#include <bits/stdc++.h>

//time complexity O(1)

int main(){
    std::stack<int> st;
    st.push(2);//{2}
    st.push(5);//{5, 2}
    st.push(1);//{1, 5, 2}
    st.emplace(7);//{7, 1, 5, 2}

    st.pop();//{1, 5, 2}
    st.pop();

    std::cout << st.top() << "\n";//prints 1  (st[2] is invalid)

    std::cout << st.size() << "\n";
    std::cout << st.empty();

    






}