// Delta__1
#include <bits/stdc++.h>
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define dm  \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long
#define pii pair<ll, ll>
#define pss pair<string, string>
#define pb push_back
#define all(a) a.begin(), a.end()
#define pf printf
#define Pi 2 * acos(0.0)
#define bitcnt(x) __builtin_popcountll(x)
#define F first
#define mpp make_pair
#define S second
#define ms(a, b) memset(a, b, sizeof(a))
#define inf 1e18L
#define MAX 1000005
#define mod 1000000007

#define S(a) scanf("%d", &a)
#define P(a) printf("%d", a)
#define SL(a) scanf("%lld", &a)
#define S2(a, b) scanf("%d%d", &a, &b)
#define S3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define SL2(a, b) scanf("%lld%lld", &a, &b)
#define SL3(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)

#define all(v) v.begin(), v.end()
#define CLR(a) memset(a, 0, sizeof(a))
#define SET(a) memset(a, -1, sizeof(a))
#define CPY(a, b) memcpy(a, b, sizeof(a))
#define Max(a) (*max_element(all(a)))
#define Min(a) (*min_element(all(a)))
#define fv(i, v) for (int i = 0; i < (int)v.size(); i++)
#define fr(i, a, n) for (int i = a; i < n; i++)

#define rf(i, n, a) for (int i = n; i >= a; i--)
#define endl '\n';
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
// sort(v.begin(), v.end(), [](pair<ll, ll> &p1, pair<ll, ll> &p2)
//      {
//     if(p1.first==p2.first){return p1.second<p2.second;}
//    else{return p1.first<p2.first;} });
using namespace std;
// ll binexp(ll a,ll b){
//     if(b==0){return 1;}
//     ll res=binexp(a,b/2);
    
//     if((b&1)){
//         return (a*(res*res)%mod)%mod;
//     }
//     else{return (res*res)%mod;}
// }
ll binexp_it(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b=b>>1;
    }
    return ans;
}
int main()
{
    fast();
    ll a,b;cin>>a>>b;
    cout<<binexp_it(a,b);
}
