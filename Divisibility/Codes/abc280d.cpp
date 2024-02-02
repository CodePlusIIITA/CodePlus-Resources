// https://atcoder.jp/contests/abc280/tasks/abc280_d

#include<bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1e12;
const int MX = sqrt(N) + 5;

vector<bool> isprime(MX, 1);
vector<int> primes;

void sieve() {
    for(int i = 2; i < MX; i++) {
        for(int j = 2; i * j < MX; j++) {
            isprime[i * j] = 0; 
        }
    }

    for(int i = 2; i < MX; i++) {
        if(isprime[i]) primes.push_back(i);
    }
}

int giveSmallestFactorial(int prime, int power) {
    if(power == 0) return 1;

    int count = 0;
    int i;

    int ans = 0;

    for(i = 1; count < power;i++) {
        int multiple = prime * i;
        ans = max(ans, multiple);
        while(multiple % prime == 0) {
            multiple /= prime;
            count++;
        }
    }

    return ans;
}   

int32_t main() {
    sieve();
    int K; cin >> K;

    int ans = 0;

    for(auto &x: primes) {
        int count = 0;

        while(K % x == 0) {
            count++;
            K /= x;
        }

        ans = max(ans, giveSmallestFactorial(x, count));
    }

    if(K > 1) {
        ans = max(ans, giveSmallestFactorial(K, 1));
    }

    cout << ans;
}