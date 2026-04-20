#include <bits/stdc++.h>
using namespace std;

bool comp(std::pair<int, int> p1, std::pair<int, int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second < p2.second) return false;
        if(p1.first > p2.first) return true;
        return false;
    }

int main(){
    //in ascending order
    // int A[5] = {7, 5, 6, 3, 7};
    // std::sort(A, A+5);
    // for(int i=0;i<5;i++){
    //     std::cout << A[i] << " ";
    // }
    // //in descending order
    // int A1[5] = {7, 5, 6, 3, 7};
    // std::sort(A, A+5, std::greater<int>());
    // for(int i=0;i<5;i++){
    //     std::cout << A1[i] << " ";
    // }

    // std::pair<int, int> p[] = {{2, 3}, {4, 3}, {1, 5}, {2, 7}};
    // std::sort(p, p+4, comp(p[0], p[1]));
    // for(int i=0;i<4;i++){
    //     std::cout << p[i].second << " ";
    // }
    // int num = 7;
    // int a = __builtin_popcount(num);//counts the number of one bits(set bits) in the binary representation
    // std::cout << a << "\n";

    // long long n = 123456789999;
    // int b = __builtin_popcountll(n);
    // std::cout << b << "\n";
    // string s = "123";
    // do{
    //     cout << s << "\n";
    // }while(next_permutation(s.begin(), s.end()));
    //if the permutation is 231 then it will print only the remaining part
    // string s = "231";
    // do{
    //     cout << s << "\n";
    // }while(next_permutation(s.begin(), s.end()));
    //if we want to print all the permuttions then we start from the sorted string 
    // string s = "231";
    // sort(s.begin(), s.end());
    // do{
    //     cout << s << "\n";
    // }while(next_permutation(s.begin(), s.end()));

    // max element
    int a[] = {3, 4, 3, 7, 3};
    int maxi = *max_element(a, a+5);
    cout << maxi;
    

}