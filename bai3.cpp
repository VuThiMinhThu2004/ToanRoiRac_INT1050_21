#include "bits/stdc++.h"
using namespace std;
int d = 0;
int ternarySearch(int l, int r, int key, int a[]) {
    while (r >= l) {  
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
        cout << "Buoc " << d << " " << l << " " << r << " " << m1 << " " << m2 << " ";
        d++;
        if (a[m1] == key) { 
            cout << " Key == a[m1]\n";
            return m1;
        }
        if (a[m2] == key) {
            cout << " Key == a[m2]\n";
            return m2;
        }
    
        if (key < a[m1]) {
            cout << " Key < a[m1]\n";
            r = m1 - 1;
        }
        else if (key > a[m2]) {
            cout << " Key > a[m2]\n";
            l = m2 + 1;
        }
        else {
            cout << " a[m1] <= Key <= a[m2]\n";
            l = m1 + 1;
            r = m2 - 1;
        }
    }
    cout << "khong tim thay\n";
    return -1;
}

int main() {
    int n = 16,x=19;
    int a[16] = {1,2,3,5,6,7,8,10,12,13,15,16,19,19,20,23};
    cout << ternarySearch(0,n-1,x,a);
}