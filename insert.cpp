#include <bits/stdc++.h>

int main(){
    std::vector<int> v(5, 80);//{80, 80, 80, 80, 80}
    v.insert(v.begin(), 60);//{60, 80, 80, 80, 80, 80}
    v.insert(v.begin()+1, 2, 78);//{60, 78, 78, 80, 80, 80, 80, 80}

    std::vector<int> copy(2, 30);
    v.insert(v.begin(), copy.begin(), copy.end());//{30, 30, 60, 78, 78, 80, 80, 80, 80, 80}

    std::cout << v.size() << "\n";

    v.pop_back();//{30, 30, 60, 78, 78, 80, 80, 80, 80} removes last element
    for(auto it : v){
        std::cout << it << " ";
    }
    std::vector<int> v1(2, 3);
    std::vector<int> v2(2, 4);
    v1.swap(v2);//v1->{4, 4}, v2->{3, 3}
    v.clear();//erases the vector
    std::cout << v.empty();
    
}