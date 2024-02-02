// https://projecteuler.net/problem=41

#include<bits/stdc++.h>
using namespace std;
 
bool check(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int32_t main() {
    int n = 7;
    string s; 
    for(char i = '1'; i <= '7'; i++) {
        s.push_back(i);
    }      
 
    int ans = 0;
 
    do {
        int number = stoi(s);
        if(check(number)) {
            ans = max(ans, number);
        }
 
    } while(next_permutation(s.begin(), s.end()));
 
    cout << ans;
}