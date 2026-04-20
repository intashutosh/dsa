#include <bits/stdc++.h>

#define vi vector<int>

using namespace std;

//a = source tower, b = destination tower, c= temp tower

void tower(vi& a, vi& b, vi& c, int n){
    if(a.size() == 0){
        return;
    }
    c.push_back(a.back());
    a.pop_back();
    b.push_back(a.back());
    a.pop_back();
    b.push_back(c.back());
    c.pop_back();
    
    cout << a.size() << endl;
    cout << "va";
    tower(b, a, c, n);
    tower(a, b, c, n);
    
}
int main(){
    vi a;
    for(int i=3;i>=1;i--){
        a.push_back(i);
    }
    vi b;
    vi c;
    tower(a, b, c, 3);
    for(int i=0;i<3;i++){
        cout << b[i] << " ";
    }
}