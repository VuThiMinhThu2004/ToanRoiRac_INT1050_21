#include<iostream>
#include<cstring>
using namespace std;
int n;
bool isPrime[100005];
void eratos() {
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= 100000; ++i) {
        if(isPrime[i] == true) {
            for(int j = i * i; j <= 100000; j += i)
                isPrime[j] = false;
        }
    }
}

int counta() {
    int cnt=0;
    for(int i=2;i<n;i++){
        if(n%i==0){break;}
        else{cnt++;}
    }
    return cnt;
}

int countb() {
    int cnt= 0;
    for(int i=2; i<n; i++) {
        if(isPrime[i] == true) {
        	if(n%i==0)
                break;
            else
                cnt++;
        }
    }
    return cnt;
}

int countc() {
    int cnt = 0;
    for(int i=2; i*i<=n;i++){
        if(isPrime[i] == true) {
        	if(n%i==0) continue;
            cnt++;
        }
    }
    return cnt;
}

int countd() {
    int cnt = 0;
    for(int i=2; i*i <= n; i++) {
        cnt++;
        while(n%i == 0) n/=i;
    }
    if(n!=1) cnt++;
    return cnt;
}
int main() {
    cin >> n;
    fill_n( isPrime, 100000, true);
    eratos();
     
    cout<<"1a: "<<counta()<<endl;
    cout<<"1b: "<<countb()<<endl;
    cout<<"1c: "<<countc()<<endl;
    cout<<"1d: "<<countd()<<endl;
    return 0;
}