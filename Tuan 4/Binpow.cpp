#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int m = 9379;
ll binpow(ll a, ll b) {
    ll res= 1;
    while(b) {
        if(b&1) res = (a%m*res%m)%m;
        a = (a%m)*(a%m)%m;
        b/=2;
    }
    return res;
}
int main() {
    ll a,b; cin >> a >> b;
    cout << binpow(a,b);
}