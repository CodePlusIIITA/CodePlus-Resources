#include <bits/stdc++.h>
using namespace std;

// Answer if N (<= 1e5) is prime or not

const int N = 1e5;  
vector<bool> isprime(N, 1); 

void sieve() { // N log N time complexity
    for(int i = 2; i < N; i++) {
        for(int j = 2; i * j < N; j++) {
            isprime[i * j] = 0; 
        }
    }
}
 
int main() {
    sieve();

    int x; cin >> x;

    if(isprime[x]) {
        cout << "Yes, it's a prime\n";
    }
    else {
        cout << "Not a prime\n";
    }

    return 0;
}