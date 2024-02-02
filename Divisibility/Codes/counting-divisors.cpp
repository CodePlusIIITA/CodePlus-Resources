// https://cses.fi/problemset/task/1713

#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
const int N = 1e6;
int MX = sqrtl(N) + 1;
vector<bool> is_prime(MX ,1);
vector<int> primes;
void sieve(){
    for (int i = 2; i*i<=N; i++){
        if(is_prime[i]){
            for (int j = i*i; j <= MX; j+=i){
                is_prime[j] = 0;
            }
        }
    }
 
     for(int i = 2; i*i <= N; i++) {
        if(is_prime[i]) primes.push_back(i);
    }
}
 
 
void solve()
{   int n;
    cin >> n;
 
    int ans = 1;
    for(auto i: primes){
        if(n%i == 0){
            int cnt{};
            while(n%i == 0){
                cnt++;
                n /= i;
            }
            ans *= (cnt+1);
        }
    }
    if(n>1){
        ans *= (2);
    }
    cout << ans << '\n';
}
 
signed main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int tt; cin >> tt; 
   sieve();
   while(tt--){solve();}
}