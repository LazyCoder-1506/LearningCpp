#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n+1, vector<int>(3));
  for (int i = 1; i <= n; i++) {
    for (int j = 0 ; j < 3; j++) cin >> arr[i][j];
  }
  vector<vector<int>> dp(n+5, vector<int>(3));
  dp[1][0] = arr[1][0];
  dp[1][1] = arr[1][1];
  dp[1][2] = arr[1][2];
  for (int i = 2; i <= n ; i++) {
    for (int j = 0 ; j < 3 ; j++) {
      dp[i][j] = arr[i][j] + max(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]);
    }
  }
  cout << max(dp[n][0], max(dp[n][1], dp[n][2]));
}

int main() {
  FastIO
  solve();
  return 0;
}