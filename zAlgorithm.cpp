#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp & 1)
            result = (__int128)result * base % mod;

        base = (__int128)base * base % mod;
        exp >>= 1;
    }
    return result;
}

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}