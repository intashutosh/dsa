#include <bits/stdc++.h>

using namespace std;

vector<int> vis, low, tim;
vector<vector<int>> adj;
vector<vector<int>> ans;

int dfs(int node){
    vis[node] = 1;
    for(auto& nbr : adj[node]){
        if(!vis[nbr]){
            low[nbr] = low[node]+1;
            dfs(nbr);
        }
        if(low[nbr] > tim[node]){
            ans.push_back({node, nbr});
        }
        else{
            low[node] = low[nbr];
        }
    }
}

int main(){
    int n; cin >> n;
    vis.resize(n);low.resize(n);tim.resize(n);
    adj = {{1, 3}, {2, 0}, {3, 1}, {0, 2, 4}, {3, 5}, {6, 8, 4}, {5, 7}, {5, 7}, {9, 8, 6}, {}}

    tim[0] = 1;
    dfs(0);
}