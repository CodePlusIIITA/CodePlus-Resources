#include <bits/stdc++.h>
using namespace std;

const double epsilon = 1e-8;

bool check() {
    
}

signed main() 
{
    cout.precision(10); cout.setf(ios::fixed);

    int n, k;
    cin >> n >> k;

    std::vector<int> v(n);
    for(auto &x: v)
        cin >> x;

    double l = 0, r = 1e9, ans = -1;

    while(r - l > epsilon) {
        double mid = l + (r - l) / 2;

        if(check()) {
            l = mid;
        }
        else {
            r = mid;
        }
    }

    cout << l + (r - l) / 2 << endl;
    return 0;
}