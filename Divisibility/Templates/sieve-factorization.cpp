#include<bits/stdc++.h>
using namespace std;
 
// Prime Factorize numbers upto N
// N can go around 1e9

const int N = 1e6;
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
 
int main() {
    sieve();

    int n; cin >> n;

    for(auto i: primes) {
        int power = 0;
        
        while(n % i==0){
            power++;
            n /= i;
        }

        if(power > 0) {
            cout << "Power of " << i << " is " << power << "\n";
        }
    }  

    if(n > 1) {
        cout << "Power of " << n << " is " << 1 << "\n";
    }
    
    return 0;
}