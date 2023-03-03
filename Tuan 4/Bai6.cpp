#include "bits/stdc++.h"
using namespace std;

int main() {
    int n= 9379, e = 17;

    // n = 83x113
    // ed = 1 (mod 9184)
    // d = (9184k + 1)/17
    if(__gcd(e,n) == 1) {
        for(int i=1; ; i++) {
            if((9184*i +1)%e == 0){
                cout << (9184*i + 1)/e;
                return 0;
            }
        }
    }
    else cout << "Khong ton tai nghich dao modulo";    
}