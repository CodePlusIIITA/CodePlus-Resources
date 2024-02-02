// https://codeforces.com/contest/1826/problem/B

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
 
        int x = 0;
        for(int i = 0; i < n / 2; i++) {
            x = gcd(x, a[i] - a[n - i - 1]);
        }
 
        cout << x << "\n";
    }
}