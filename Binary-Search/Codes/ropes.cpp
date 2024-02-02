#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define int long long
#define double long double

const double epsilon = 1e-8;

bool check(double size, int k, vector<int> &v) {
    int ropes = 0;

    for(auto &x: v) {
        ropes += floor(x / size);
    }

    return (ropes >= k);
}

signed main() 
{
    cout.precision(10); cout.setf(ios::fixed);
    int n, k;
    cin >> n >> k;

    std::vector<int> v(n);
    for(auto &x: v)
        cin >> x;

    double l = 0, r = 1e9, ans = 0;

    while(r - l > epsilon) {
        double mid = l + (r - l) / 2;

        if(check(mid, k, v)) {
            l = mid;
        }
        else {
            r = mid;
        }
    }

    cout << l << endl;
    return 0;
}