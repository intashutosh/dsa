#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

#define int long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

const int MOD = 1e9 + 7;
const int MAX = 2000005;

long long fact[MAX], invfact[MAX];

long long power(long long x, long long y) {
    long long res = 1;
    while (y) {
        if (y & 1) res = (res * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

void init() {
    fact[0] = invfact[0] = 1;
    for (int i = 1; i < MAX; i++)
        fact[i] = fact[i-1] * i % MOD;

    invfact[MAX-1] = power(fact[MAX-1], MOD-2);   // Fermat inverse
    for (int i = MAX-2; i >= 1; i--)
        invfact[i] = invfact[i+1] * (i+1) % MOD;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % MOD * invfact[n-r] % MOD;
}

const int INF = 1e18;

long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

