#include<bits/stdc++.h>
using namespace std;
 
// Factorization in O(sqrt(N)) complexity

int main() {

    int n; cin >> n;

    for(int i = 2; i * i <= n; i++) {
        int power = 0;
        while(n % i == 0){
            power++;
            n /= i;
        }
        // cout << "Power of " << i << " is " << power << "\n";
    } 

    if(n > 1) {
        // cout << "Power of " << n << " is " << 1 << "\n";
    }

    return 0;
}