#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
  string s, t;
  cin >> s >> t;
  int lens = s.length();
  int lent = t.length();
  string ans = "";
  vector<vector<int>> dp(3001, vector<int>(3001, 0));
  for (int i = 1; i <= lens; i++) {
    for (int j = 1; j <= lent; j++) {
      char ss = s[i-1];
      char tt = t[j-1];
      if (ss == tt) {
        dp[i][j] = 1 + dp[i-1][j-1];
      }
      else {
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }
  int n = lens, m = lent;
  while (n && m) {
    if (s[n-1] == t[m-1]) {
      ans = s[n-1] + ans;
      n--;
      m--;
    }
    else if (dp[n-1][m] > dp[n][m-1]) n--;
    else m--;
  }
  cout << ans;
}

int main() {
  FastIO
  solve();
  return 0;
}