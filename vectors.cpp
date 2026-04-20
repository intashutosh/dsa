#include <bits/stdc++.h>

int main(){
    std::vector<int> v;
    v.push_back(1);/*it creates copy of the existing variable or move the value into the vector*/
    v.emplace_back(3);/*more efficient than push_back. Constructs an object given as an argument. it does not
    require prexistance*/
    v.push_back(8);
    v.push_back(6);
    v.push_back(9);
    v.pop_back();
    //sorting of a vector
    // std::vector<int> a = {2, 29, 6, 13, 26, 9, 30, 1, 25, 22, 5, 14, 10, 17, 18, 21};
    // std::sort(a.begin(), a.end());
    // for(int it:a){
    //     std::cout << it << " ";
    int a = (v[0] == 'a') ? 1 : 2;
    std::cout << a;
    // }
    std::cout << v.size();

    // std::vector<std::pair<int, int>> v1;

    // v1.push_back({3, 4});
    // v1.emplace_back(5,6);

    // std::vector <int> v2(4, 100);//creates an vector of 4 instances of 100

    // std::vector <int> v4(5);//creates an vector of 

    // std::vector <int> v3(v2); //create copy of vector v2

    // // for(int i=0;i<4;i++){
    // //     std::cout << v2[i] <<" ";
    // // }

    // //iterating through the vector

    // std::vector<int>::iterator it = v.begin();
    // it++;
    // std::cout << *(it) << " ";

    // it = it+2;
    // std::cout << *(it) << " ";  
    
    // std::vector<int>::iterator it1 = v.end(); //points to the memory that is right after the end element
    // it1--;
    // std::cout << *(it1) << " ";
    // std::vector<int>::iterator it2 = v.rbegin();
    // std::vector<int>::iterator it3 = v.rbegin();
    // std::cout << v[0] << " " << v.at(0);
    // std::cout << v.back();


}