#include "bits/stdc++.h"
using namespace std;
int n=4, m=6;
string add(string a, string b) {
    int     du  = 0;
    int     mid = 0;
    string  res = "";
    a.insert(0, max(0, (int) (b.length() - a.length())), '0');
    b.insert(0, max(0, (int) (a.length() - b.length())), '0');
    for (int i = a.length()-1; i >= 0; --i) {
        mid = ((int) a[i] - 48) + ((int) b[i] - 48) + du;
        du  = mid / 2;
        res = (char) (mid % 2 + 48) + res;
    }
    if (du > 0) res = "1" + res;
    return res;
}

string mulity(string a, string b) {
    string res ="000000";
    for(int i=b.size()-1; i >= 0; i--) {
        if(b[i] == '1') {
            res = add(a,res);
        }
        cout << res << endl;
        a = a + "0";
    }
    return res;
}
int main() {
    string a = "110001"; // 49 = 110001
    string b = "1011";  // 11 = 1011
    
    cout << mulity(a,b);
}