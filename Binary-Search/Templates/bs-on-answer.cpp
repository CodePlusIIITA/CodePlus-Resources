#include <bits/stdc++.h>
using namespace std;

// check(x) is a predicate function that returns true if x can be 
// a possible answer to the problem else false. 

bool check() {
    
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

        if(check()) {
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