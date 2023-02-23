#include "bits/stdc++.h"
using namespace std;

int find_Position(int a[], int left, int right, int key) {
    int l= left, r= right;
    while(l <= r) {
        int mid = l + (r-l)/2;
        if(key < a[mid])    r = mid-1;
        else l = mid+1;
    }
    return l;
}

void binary_Insertion(int a[], int n) {
    for(int i=1; i < n; i++) {
        int key = a[i];
        int position = find_Position(a,0,i-1,key);
        cout << position << " " << (i-1 >= position ? "True" : "False") << " ";
        for(int j = i-1; j >= position; j--) {
        }
        a[position] = key; 
        for(int i=0; i < n; i++) cout << *(a+i) << " ";
        cout << endl;
    }
}

int main() {
    int a[6] = { 3,2,4,5,1,6 };
    int n = 6;
 
    binary_Insertion(a, n);
 
    return 0;
}
