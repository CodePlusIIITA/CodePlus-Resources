#include <bits/stdc++.h>
using namespace std;

// Find index i s.t. arr[i] = x in sorted array using binary search
// Return -1 if x does not exist in the array
// O(log(n))

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

        if(arr[mid] == x) {
            ans = mid;
            break;
        }
        else if(arr[mid] > x) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}