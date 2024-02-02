#include <bits/stdc++.h>
using namespace std;

// Calculates gcd and lcm in O(log N) time 

int gcd_function(int x, int y) {
    if(y == 0) {
        return x;
    }
    return gcd_function(y, x % y);
}

int lcm_function(int x, int y) {
    return (x * y) / gcd_function(x, y);
}

int main() {
    int x, y; 
    cin >> x >> y;

    cout << "GCD is: " << gcd_function(x, y) << "\n";
    cout << "LCM is: " << lcm_function(x, y) << "\n";
}