#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {1, 4, 5, 6, 9, 9};
    int a = upper_bound(A, A+6, 4)-A;//gives index of that element which is just larger than the given element
    cout << a << endl;
    int b = upper_bound(A, A+6, 6) - A;//if larger element does not exist in the array then gives the index of last element  + 1
    cout << b << endl;
    int c  = upper_bound(A, A+6, 10) - A;//gives the index of last element  + 1
    cout << c << endl; 
}

