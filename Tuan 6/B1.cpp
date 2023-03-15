//Dem so bit 1 trong xau

#include "bits/stdc++.h"
using namespace std;
int n;
int count(vector<char> s) {
    n--;
    if (n == 0) {
        if (s[0] == '1') return 1;
        else return 0;
    }
    if (s[n] == '1') {
        s.pop_back();
        return 1 + count(s);
    }
    else {
        s.pop_back();
        return count(s);
    }
}
int main() {
    cin >> n;
    vector<char> s(n);
    for(char &x : s) cin >> x;
    
    cout << count(s);
}
