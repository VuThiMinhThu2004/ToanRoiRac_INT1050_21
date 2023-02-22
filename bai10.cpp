#include <bits/stdc++.h>
using namespace std;

void divisionAlgorithm(int a, int d) {
    int q = 0;
    int r = abs(a);
    while(r >= d) { 
        r -= d;
        q += 1; // tim xem co bao nhieu so hang d co tong <= r
    }
    if (a < 0 && r > 0) { // Th a la so nguyen am va r(=a mod d) > 0 
        r = d - r;  
        q = -(q+1);
    }
    cout << q << " " << r; // q = a div d, r = a mod d
}
int main() {
    int a,d; cin >> a >> d;
    divisionAlgorithm(a,d);
}