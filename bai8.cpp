#include "bits/stdc++.h"
using namespace std;
map<int,int> mp;
vector<int> v;

void Counting_Sort(int a[], int n) {
    for(auto it : mp) {
        while(it.second--) {
            v.push_back(it.first);
        }
    }
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x, mp[x]++;
    Counting_Sort(a,n);
    for(auto it : v) cout << it << " ";
    return 0;
}