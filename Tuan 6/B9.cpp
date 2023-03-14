#include "bits/stdc++.h"
using namespace std;
#define ff(i,a,b) for(int i=a; i <= b; i++)
/* Có bao nhiêu xâu nhị phân độ dài 12 bắt đầu bằng chữ số 1 và không có 2 chữ số  1 nào đứng cạnh nhau? */
int n = 12, a[20];

void init() {
    ff(i,1,n) a[i] = 0;
}

bool check() {
    a[1] = 1;
    ff(i,2,n) if (a[i] == 0)    return false;
    return true; 
}

void sinh() {
    int i = n;
    while(i >= 2 && a[i] == 1) {
        a[i--] = 0;
    }
    a[i] = 1;
}

bool KiemTra() {
    int cnt = 0;
    ff(i,1,n) {
        if (a[i] == 1 && a[i+1] == 1)  return false;
    }
    return true;
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
    cout << d;
    return 0;
}