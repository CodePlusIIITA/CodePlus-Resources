#include <bits/stdc++.h>
using namespace std;

// O(N * 1 / ε), where ε is the required precision

const double epsilon = 1e-8;

signed main() 
{
    cout.precision(10); cout.setf(ios::fixed);

    int n;
    cin >> n;

    double l = 0, r = n, ans = -1;

    while(r - l > epsilon) {
        double mid = l + (r - l) / 2;

        if(mid * mid < n) {
            l = mid;
        }
        else {
            r = mid;
        }
    }

    cout << l + (r - l) / 2 << endl;
    return 0;
}