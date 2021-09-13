#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> heights(n+1);
  for (int i = 1 ; i <= n; i++) cin >> heights[i];
  vector<int> dp(100005);
  dp[1] = 0;
  for (int i = 2; i <= n ; i++) {
    int mincost = INT_MAX;
    for (int j = 1 ; j <= k ; j++) {
      if (i - j > 0) {
        mincost = min(mincost, dp[i-j] + abs(heights[i] - heights[i-j]));
      }
    }
    dp[i] = mincost;
  }
  cout << dp[n];
}

int main() {
  FastIO
  solve();
  return 0;
}