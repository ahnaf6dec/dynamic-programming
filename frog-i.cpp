// ahnaf09
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> h(n);
  for (int &x : h) cin >> x;

  // dp[i] = minimum cost to reach stone i
  vector<ll> dp(n, 0);

  // Base cases
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);

  for (int i = 2; i < n; ++i) {
    // Jump from (i - 1) to i
    ll one = dp[i - 1] + abs(h[i] - h[i - 1]);
    // Jump from (i - 2) to i
    ll two = dp[i - 2] + abs(h[i] - h[i - 2]);
    dp[i] = min(one, two);
  }

  cout << dp[n - 1] << endl;

  return 0;
}
