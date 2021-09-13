#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
  int n, x;
  cin >> n >> x;
  vector<ll> weights(n+1);
  vector<ll> values(n+1);
  for (int i = 1 ; i <= n ; i++) {
    cin >> weights[i];
    cin >> values[i];
  }
  vector<vector<ll>> dp(1005, vector<ll>(100005, 0));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= x; j++) {
      if (weights[i] > j) {
        dp[i][j] = dp[i-1][j];
      }
      else {
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-weights[i]] + values[i]);
      }
    }
  }
  cout << dp[n][x];
}

int main() {
  FastIO
  solve();
  return 0;
}