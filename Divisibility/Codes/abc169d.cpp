// https://atcoder.jp/contests/abc169/tasks/abc169_d

#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1e12; // int -> 1e9
const int MX = sqrtl(N);

int func(int k) {
    int ans = 0;
    for(int i = 0; (i * (i + 1)) / 2 <= k; i++) {
        ans = i;
    }
    return ans;
}

signed main() {
    int n; cin >> n;
    int res = 0;
    for(int i = 2; i <= MX; i++) { // 1e7
        int power_of_i = 0;
        while(n % i == 0) {
            n /= i;
            power_of_i++;
        }   
        res += func(power_of_i);
    }
    if(n > 1) res++;
    cout << res;
}