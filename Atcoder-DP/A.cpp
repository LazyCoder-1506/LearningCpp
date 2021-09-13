#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
  int n;
  cin >> n;
  vector<int> heights(n+1);
  for (int i = 1 ; i <= n; i++) cin >> heights[i];
  vector<int> dp(100005);
  dp[1] = 0;
  dp[2] = abs(heights[1] - heights[2]);
  for (int i = 3; i <= n ; i++) {
    int jump1 = abs(heights[i] - heights[i-1]);
    int jump2 = abs(heights[i] - heights[i-2]);
    dp[i] = min(dp[i-1] + jump1, dp[i-2] + jump2);
  }
  cout << dp[n];
}

int main() {
  FastIO
  solve();
  return 0;
}