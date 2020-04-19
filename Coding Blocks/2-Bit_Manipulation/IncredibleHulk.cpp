#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define inp(arr, n)            \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
#define fr(n) for (ll i = 0; i < n; i++)
#define frk(i, n) for (ll i = 0; i < n; i++)
#define frs(a, b) for (ll i = a; i <= b; i++)
#define frn(a, b) for (ll i = a; i >= b; i--)
#define sumarray(arr, n, sum)  \
    for (ll i = 0; i < n; i++) \
        sum += arr[i];
ll countSetBits(ll n){
    ll ans = 0;
    while(n){
        n = n&(n-1);
        ans++;
    }
    return ans;
}        
int main(){
    FIO
    ll T;
    cin >> T;
    while (T--){
        ll N;
        cin>>N;
        cout<<countSetBits(N)<<"\n";
    }
    return 0;
}