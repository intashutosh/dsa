#include <bits/stdc++.h>

using namespace std;

// void dfs_traversal(vector<vector<int>> g){
//     stack<int> st;
//     int n = g.size();
//     int visited[n] = {};
//     st.push(0);
//     visited[0] = 1;
//     while(!st.empty()){
//         int u = st.top(); st.pop();
//         cout << u << endl;
//         for(int i=n-1;i>=0;i--){
//             if(g[u][i] == 1 && visited[i] == 0){
//                 visited[i] = 1;
//                 st.push(i);
//             }
//         }
//     }
// }

int main(){
    vector<vector<int>> v = {{0, 1, 1, 0, 0}, {1, 0, 0, 1, 0}, {1, 0, 0, 1, 1}, {0, 1, 1, 0, 1}, {0, 0, 1, 1, 0}};
    dfs_traversal(v);
}