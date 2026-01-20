
/*
— Young people never give up !
    <wavefunction>
*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <chrono>
using namespace std;

#define nl                              "\n"
#define MOD                             1000000007
#define MOD1                            998244353
#define INF                             1e18
#define PI                              3.141592653589793238462
#define pb                              push_back
#define ppb                             pop_back
#define mp                              make_pair
#define ff                              first
#define ss                              second
#define sz(x)                           ((int)(x).size())
#define all(x)                          (x).begin(), (x).end()
#define set_bits                        __builtin_popcountll
#define vin(v, n)                       for (int i = 0; i < (n); i++) cin >> (v)[i]
#define yes                             cout << "Yes\n"
#define no                              cout << "No\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << "[ " << #x << " ] = "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

void _print(ll t)                       {cerr << t;}
void _print(int t)                      {cerr << t;}
void _print(string t)                   {cerr << t;}
void _print(char t)                     {cerr << t;}
void _print(lld t)                      {cerr << t;}
void _print(double t)                   {cerr << t;}
void _print(ull t)                      {cerr << t;}
 
template <class T, class V>             void _print(pair <T, V> p);
template <class T>                      void _print(vector <T> v);
template <class T>                      void _print(set <T> v);
template <class T, class V>             void _print(map <T, V> v);
template <class T>                      void _print(multiset <T> v);
template <class T, class V>             void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T>                      void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>                      void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T>                      void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V>             void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

ll gcd(ll a, ll b){
    if (b > a) return gcd(b, a);
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll power(ll a, ll b, ll mod = MOD){
    ll res = 1;
    while (b > 0){
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

bool isprime(ll n){
    if(n < 2) return false;
    if(n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(ll i = 5; i*i <= n; i += 6)
        if(n%i == 0 || n%(i + 2) == 0) return false;
    return true;
}

ll cntDigits(ll n){
    ll cnt = 0;
    while (n > 0){
        cnt++;
        n /= 10;
    }
    return cnt;
}

ll cntDivisors(ll n){
    ll cnt = 0;
    for(ll i = 1; i*i <= n; i++){
        if(n%i == 0){
            if(n/i == i) cnt++;
            else cnt = cnt + 2;
        }
    }
    return cnt;
}

vector<ll> sieve(int n){
    vector<int> arr(n + 1, 0);
    vector<ll> vect;
    for (int i = 2; i <= n; i++){
        if (arr[i] == 0) {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i) arr[j] = 1;
        }
    }
    return vect;
}

bool revsort(ll a, ll b) {
    return a > b;
}

void pvec(vector<ll> &a){
    for(const auto &x : a) cout << x << " ";
}

vector<pair<ll, ll>> primefactors(ll n){
    map<ll, ll> mp;
    while(n%2 == 0){
        mp[2]++;
        n /= 2;
    }
    for(ll i = 3; i*i <= n; i += 2){
        while(n%i == 0){
            mp[i]++;
            n /= i;
        }
    }
    if(n > 1) mp[n]++;
    vector<pair<ll,ll>> v;
    for(auto it = mp.begin(); it != mp.end(); it++){
        v.push_back({it->first, it->second});
    }
    return v;
}



void wavefunction(){
    cout << 5343 << nl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    auto begin = chrono::high_resolution_clock::now();
    int t = 1;
    cin >> t;
    while(t--) 
        wavefunction();
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
} 

