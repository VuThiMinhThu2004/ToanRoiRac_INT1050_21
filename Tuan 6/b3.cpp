#include "bits/stdc++.h"
using namespace std;

int main() {
    int cnt = 0;
    for (int i=1; i <= 1000; i++) {
        if (i%3 != 0 && i%12!=0 && i%16!=0) cnt++;
    }

    cout << cnt;
}