#include "bits/stdc++.h"
using namespace std;
#define ff(i,a,b) for(int i=a; i <= b; i++)

int n = 12, a[20];

void init() {
    ff(i,1,n) a[i] = 0;
}

bool check() {
    ff(i,1,n) if (a[i] == 0)    return false;
    return true; 
}

void sinh() {
    int i = n;
    while(i >= 1 && a[i] == 1) {
        a[i--] = 0;
    }
    a[i] = 1;
}

bool KiemTra() {
    int cnt = 0;
    ff(i,1,n) {
        if(a[i] == 1) cnt++;
    }
    return (cnt > 6);
}

int main() {
    init();
    int d = 0;
    while (!check()) {
        if (KiemTra()) {
            ff(i,1,n) cout << a[i];
            cout << "\n";
            d++;
        }
        sinh();
    }
    ff(i,1,n) cout << a[i]; // 12 c/s 1
    d++;
    cout << d;
    return 0;
}