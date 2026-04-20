#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//lazy propagation
int n;

void updateRange(int start, int end, int i, int l, int r, vector<int>& segt, vector<int>& lazy, int val){

    if(lazy[i] != 0){
        lazy[i] = (r-l+1)*lazy[i];
        if(l != r){
            lazy[2*i+1] = lazy[i];
            lazy[2*i+2] = lazy[i];
        }
        lazy[i] = 0;
    }

    if(l >= start && r <= end){
        segt[i] = (r-l+1)*val;
        if(l != r){
            lazy[2*i+1] = val;
            lazy[2*i+2] = val;
        }
        return;
    }

    if(start > r || end < l){
        return;
    }
    int mid = l + (r-l)/2;
    updateRange(start, end, 2*i+1, l, mid, segt, lazy);
    updateRange(start, end, 2*i+2, mid+1, r, segt, lazy);
    segt[i] = segt[2*i+1] + segt[2*i+1];
}

int updateQuery(vector<int>& segt, int idx, int l, int r, int i, int val){
    if(idx < l || idx > r) return segt[i];
    if(l == r)  return segt[i]  = val;
    int mid = (l+r)/2;
    int a = updateQuery(segt, idx, l, mid, i*2+1, val);
    int b = updateQuery(segt, idx, mid+1, r, i*2+2, val);
    return segt[i] = a+b;
}

int query(vector<int>& segt, int tl, int tr, int l, int r, int ind){
    if(tr < l || tl > r) return 0;
    if(tl <= l && tr >= r){
        return segt[ind];
    }
    int mid = (l+r)/2;
    int a = query(segt, tl, tr, l, mid, 2*ind+1);
    int b = query(segt, tl, tr, mid+1, r, 2*ind+2);
    return a+b;
}   

int buildSegtree(vector<int>& v, vector<int>& segt, int l, int r, int ind){
    if(l==r) return segt[ind] = v[l];
    int mid = (l+r)/2;
    int a = buildSegtree(v, segt, l, mid, 2*ind+1);
    int b = buildSegtree(v, segt, mid+1, r, 2*ind+2);
    return segt[ind] = a+b;
}

int main() {
    vector<int> v = {1, 5, 3, 4, 63, 5};
    n = v.size();
    vector<int> segt(4*n);
    int a = buildSegtree(v, segt, 0, n-1, 0);
    int ans = query(segt, 0, 3, 0, n-1, 0);
    cout << ans << endl;
}