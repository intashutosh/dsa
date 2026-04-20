#include <bits/stdc++.h>
using namespace std;

string convertbin(int n){
    string s = "";
    int a = n;
    int b;
    while(a>0){
        char c = '0' + a%2;
        s=string(1, c)+s;
        a/=2;
    }
    return s;

}

int main(){
    cout << convertbin(11);
}