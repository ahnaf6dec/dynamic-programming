// ahnaf09
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
  
const int N = 100;
// **Top Down DP (Memorization)** -> Recursive DP
// vector<ll>dp(N+1, -1);
// ll factorial(int n) {
//   if(n <= 1) {
//     return 1;
//   }
//   if(dp[n] != -1) {
//     return dp[n];
//   }
//   return dp[n] = n * factorial(n - 1);
// }

// **Bottom Up DP ** -> Iterative DP -> Fast
ll factorial(int n) {
  vector<ll>dp(n + 1);
  dp[0] = 1;
  for(int i = 1; i <= n; ++i) {
    dp[i] = 1LL * i * dp[i - 1];
  }
  return dp[n];
} 



// **Top Down DP (Memorization)** -> Recursive DP
// vector<ll>dp(N+1, -1);
// ll fibo(int n) {
//   if(n <= 1) {
//     return n;
//   }
//   if(dp[n] != -1) {
//     return dp[n];
//   }
//   return dp[n] = fibo(n - 1) + fibo(n - 2);
// }

// **Bottom Up DP ** -> Iterative DP -> Fast
ll fibo(int n) {
  if(n <= 1) return n;
  vector<ll>dp(n + 1);
  dp[0] = 0;
  dp[1] = 1;
  for(int i = 2; i <= n; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}



int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  cout << factorial(n)  << endl;
  cout << fibo(n) << endl;
  return 0;
}
