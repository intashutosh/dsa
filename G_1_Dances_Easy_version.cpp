#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vp vector<pair<int, int>>
#define pii pair<int,int>
#define pll pair<long long,long long>

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// -------------------- Fast IO --------------------
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

// -------------------- Custom Hash (Anti-hack) --------------------
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

// -------------------- Containers --------------------
unordered_map<ll, ll, custom_hash> ump;
unordered_set<ll, custom_hash> us;
map<ll, ll> mp;
set<ll> st;
multiset<ll> mst;

// -------------------- Modular Arithmetic --------------------
ll modAdd(ll a, ll b, ll m = MOD) {
    return (a % m + b % m) % m;
}

ll modSub(ll a, ll b, ll m = MOD) {
    return (a % m - b % m + m) % m;
}

ll modMul(ll a, ll b, ll m = MOD) {
    return (a % m * b % m) % m;
}

ll modPow(ll base, ll exp, ll m = MOD) {
    ll res = 1;
    base %= m;
    while (exp > 0) {
        if (exp & 1) res = modMul(res, base, m);
        base = modMul(base, base, m);
        exp >>= 1;
    }
    return res;
}

ll modInv(ll a, ll m = MOD) {
    return modPow(a, m - 2, m);
}

// -------------------- nCr, nPr --------------------
const int MAXN = 1000005;
ll fact[MAXN], invFact[MAXN];

void initFactorial() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
        fact[i] = modMul(fact[i - 1], i);

    invFact[MAXN - 1] = modInv(fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 0; i--)
        invFact[i] = modMul(invFact[i + 1], i + 1);
}

ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return modMul(fact[n], modMul(invFact[r], invFact[n - r]));
}

ll nPr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return modMul(fact[n], invFact[n - r]);
}

// -------------------- GCD / LCM --------------------
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// -------------------- Sieve --------------------
vector<bool> isPrime;
void sieve(int n) {
    isPrime.assign(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
}

// -------------------- SPF --------------------
const int MAXS = 1000005;
int spf[MAXS];

void computeSPF() {
    for (int i = 1; i < MAXS; i++) spf[i] = i;
    for (int i = 2; i * i < MAXS; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXS; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

vector<int> getFactorization(int x) {
    vector<int> res;
    while (x != 1) {
        res.push_back(spf[x]);
        x /= spf[x];
    }
    return res;
}

// -------------------- Comparator --------------------
bool cmp(pii a, pii b) {
    if (a.ff == b.ff) return a.ss > b.ss;
    return a.ff < b.ff;
}

// -------------------- Solve --------------------
void solve() {
    int n, m; cin >> n >> m;
    vi a(n), b(n);
    a[0] = 1;
    for(int i=1;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    sort(all(a)); sort(all(b));
    int ans = 0;
    int x = n-1, y = n-1;
    while(x >= 0 && y >= 0){
        if(a[x] < b[y]){
            y--;ans++;
        }
        x--;
    }
    cout << n-ans << endl;
}

// -------------------- Main --------------------
int main() {
    fastIO();
    initFactorial();
    computeSPF();

    int t; cin >> t;
    while (t--) solve();

    return 0;
}