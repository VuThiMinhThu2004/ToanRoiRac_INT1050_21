#include "bits/stdc++.h"
using namespace std;

int extendedEuclid(int a, int m, int& x, int& y) {
    if (m == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extendedEuclid(m, a % m, x1, y1);
    x = y1;
    y = x1 - y1 * (a / m);
    return gcd;
}

int modInverse(int a, int m) {
    int x, y;
    int gcd = extendedEuclid(a, m, x, y);
    if (gcd != 1) {
        // a and m are not coprime, so inverse doesn't exist
        return -1;
    }
    else {
        // x is the inverse of a modulo m
        return (x % m + m) % m;
    }
}

int main() {
    
}