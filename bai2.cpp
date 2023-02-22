#include "bits/stdc++.h"
using namespace std;

int ternarySearch(int l, int r, int key, int a[]) {
    while (r >= l) {  
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
  
        if (a[m1] == key) {
            return m1;
        }
        if (a[m2] == key) {
            return m2;
        }
    
        if (key < a[m1]) {
            r = m1 - 1;
        }
        else if (key > a[m2]) {
            l = m2 + 1;
        }
        else {
            l = m1 + 1;
            r = m2 - 1;
        }
    }
    return -1;
}

int main() {
    int n,key; cin >> n >> key;
    int a[n];
    for(int &x : a) cin >> x;

    cout << ternarySearch(0,n-1,key,a);
}