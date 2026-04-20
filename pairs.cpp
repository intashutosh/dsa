#include <bits/stdc++.h>
using namespace std;

//pairs
int main(){
    pair<int, string> p = {1, "adarsh"};
    cout << p.first << " " << p.second<< "\n";
    pair<int, pair<int, int>> a = {2, {3, 4}};
    cout << a.first << " " << a.second.second << " " << a.second.first << "\n";
    pair<int, int> A[] = {{3, 4}, {3, 5}, {6, 1}}; // lies in utility library
    cout << A[1].second << "\n";
}