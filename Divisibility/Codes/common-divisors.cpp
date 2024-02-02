// https://cses.fi/problemset/task/1081

#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e6;
int hsh[N + 2];
 
int main() {
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        hsh[x]++;
    }
    int ans = 1;
    for(int i = 1; i <= N; i++) {
        // fix gcd = i
        int count = 0;
        for(int j = 1; i * j <= N; j++) {
            count += hsh[i * j];
        }
        if(count >= 2) ans = i;
    }
 
    cout << ans;
}