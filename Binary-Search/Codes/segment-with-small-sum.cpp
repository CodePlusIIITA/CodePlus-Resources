#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define int long long

bool check(int l, int r, int s, vector<int> &psum) {
    return (psum[r] - psum[l - 1]) <= s;
}

signed main() 
{
    int n, s;
    cin >> n >> s;

    std::vector<int> v(n + 1), psum(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        psum[i] = psum[i - 1] + v[i];
    }

    int ans = 0;
    for(int l = 1; l <= n; l++) {
        int low = l, high = n, r = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(check(l, mid, s, psum)) {
                r = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans << endl;
    return 0;
}