#include "bits/stdc++.h"
using namespace std;

int cnt=0;

int find_Position(int a[], int left, int right, int key) {
    int l= left, r= right;
    while(l <= r) {

        cnt += 2; // 1dk ở while và trong if

        int mid = l + (r-l)/2;
        if(key < a[mid])    r = mid-1;
        else l = mid+1;
    }
    return l;
}

void binary_Insertion(int a[], int n) {
    for(int i=1; i < n; i++) {
        cnt++; // dk lap

        int key = a[i];
        int position = find_Position(a,0,i-1,key);
        for(int j = i-1; j >= position; j--) { // xet day con [position,i-1]
            a[j+1] = a[j]; // swap
            cnt++; //dk lap
        }
        a[position] = key; // dao vi tri 
    }
}

int main() {
    int a[8] = { 7, 4, 3, 8, 1, 5, 4, 2 };
    int n = 8; 

    binary_Insertion(a, n); 
 
    cout << "So phep so sanh thuc hien la: " << cnt;
    return 0;
}