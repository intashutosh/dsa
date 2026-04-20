#include <bits/stdc++.h>
using namespace std;

int main(){

    //maximum  heap
    priority_queue<pair<int, int>> pq;
    pq.push({5, 0});//{5}
    pq.push({2, 6});//{5, 2}
    pq.push({4, 6});//{5, 4, 2}
    pq.push({8, 9});//{8, 5, 4, 2}
    pq.push({8, 10});
    cout << pq.top().first << pq.top().second;

    // pq.pop(); //removes top element which is 8

    // cout << pq.top() << "\n";
    // //size swap empty functions same as others

    // //minimun heap

    // priority_queue<int , vector<int>, greater<int>> q;
    // q.push(5);//{5}
    // q.push(2);//{2, 5}
    // q.push(8);//{2, 5, 8}
    // q.push(10);//{2, 5, 8, 10}

    // q.pop();
    // cout << q.top();
    // for(auto it : pq){
        
    // }
}