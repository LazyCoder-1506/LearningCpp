#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// dp[i][j] gives minimum weight possible to have value = j after making decision on ith item

void solve() {
  int n, w;
  cin >> n >> w;
  vector<int> weights(n+1);
  vector<int> values(n+1);
  int maxvalue = 0;
  for (int i = 1 ; i <= n ; i++) {
    cin >> weights[i];
    cin >> values[i];
    maxvalue += values[i];
  }
  vector<vector<ll>> dp(n+2, vector<ll>(maxvalue+1, INT_MAX));
  int ans = 0;
  for (int i = 0 ; i <= n ; i++) dp[i][0] = 0;
  for (int i = 1 ; i<= n ; i++) {
    for (int j = 1 ; j <= maxvalue; j++) {
      if (values[i] > j) {
        dp[i][j] = dp[i-1][j];
      }
      else {
        dp[i][j] = min(dp[i-1][j], dp[i-1][j-values[i]] + weights[i]);
      }
      if (dp[i][j] <= w) {ans = max(ans, j);}
    }
  }
  cout << ans;
}

int main() {
  FastIO
  solve();
  return 0;
}