#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <deque>
#include <bitset>
#include <cstring>
#include <iomanip>
#include <climits>

using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define endl '\n'
#define ll long long

#ifdef LOCAL
#else
#define dbg(x)
#endif

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int INF = 1e18;
const int MOD = 1e9+7;
const double EPS = 1e-9;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int mod_add(int a, int b, int m = MOD) { return ((a % m) + (b % m)) % m; }
int mod_mul(int a, int b, int m = MOD) { return ((a % m) * (b % m)) % m; }
int mod_sub(int a, int b, int m = MOD) { return ((a % m) - (b % m) + m) % m; }
int mod_pow(int a, int b, int m = MOD) {
    int res = 1;
    while (b) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}


void solve(int n) {

 }
         
 




int32_t main() {
    fastIO();
        int t,n=0;
         cin>>t;  
        while(t--){
        solve(n);
    }
   
    
cout<<n;

    return 0;


}





