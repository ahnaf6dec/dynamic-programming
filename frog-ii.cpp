// ahnaf09
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
const int INF = 1e9;
const int MOD = 1e9 + 7;



int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  for (int &x : h) cin >> x;

  vector<ll> dp(n, INF); // we don't know the exact ans

  dp[0] = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j <= min(n - 1, i + k); ++j) {
      ll cost = abs(h[j] - h[i]);
      dp[j] = min(dp[j], dp[i] + cost);
    }
  }
  cout << dp[n - 1] << endl;

  return 0;
}
