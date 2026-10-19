#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

//problem
//find the total number of digits in a given range

//we will start from the msb

//counting total number of digits in a given range

int l, r;

int sum_of_digits(int idx, int sum, int tight, vector<int>& v, vector<vector<vector<int>>>& dp){
    if(idx == v.size()) return;
    if(dp[idx][sum][tight] != -1) return dp[idx][sum][tight];

    ll sum = 0;

    if(tight == 0){
        for(int i=0;i<=9;i++){
            sum+= i+sum_of_digits(idx+1, sum+i, tight, v, dp);
        }
    }
    else{
        for(int i=0;i<=v[idx];i++){
            int nt = (i==v[idx]) ? 1 : 0;
            sum+=i+sum_of_digits(idx+1, sum+i, nt, v, dp);
        }
    }
    return sum;
}

int main(){
    l = 2929;r = 6837293;
    int templ = l-1, tempr = r;
    vector<int> vr, vl;
    while(templ != 0){
        vl.push_back(templ%10);
        templ/=10;
    }
    while(tempr != 0){
        vr.push_back(tempr%10);
        tempr/=10;
    }
    vector<vector<vector<int>>> dpr(vr.size(), vector<vector<int>>(100000000, vector<int>(2, -1))), dpl(vl.size(), vector<vector<int>>(100000000, vector<int>(2, -1)));
    cout << sum_of_digits(0, 0, 1, vr, dpr) - sum_of_digits(0, 0, 1, vl, dpl);


    
}