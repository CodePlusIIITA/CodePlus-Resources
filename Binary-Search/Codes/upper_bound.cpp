#include <bits/stdc++.h>
using namespace std;

// Given a sorted array arr, find the smallest index i s.t. arr[i] > x.
// If there exists no such index, print -1.
// O(log(n))

bool check(int i, int x, vector<int> &arr) {
    return (arr[i] > x);
}

int main() 
{
    int n, x;
    cin >> n >> x;

    std::vector<int> arr(n);
    for(auto &x: arr)
        cin >> x;

    int l = 0, r = n - 1, ans = -1;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        if(check(mid, x, arr)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}