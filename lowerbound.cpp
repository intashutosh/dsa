#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {1, 4, 5, 6, 9, 9};
    int a = lower_bound(A, A+5, 5) - A;//gives index of 5 which is 2
    cout << a << endl;
    int b = lower_bound(A, A+6, 7) - A;//gives index of number which is greater than 7, which is 9 whose index is 4
    cout << b << endl;
    int c = lower_bound(A, A+6, 10) - A;//gives index just after that of last element in the array
    cout << c << endl;
}