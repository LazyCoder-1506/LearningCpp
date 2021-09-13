#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> graph[100005];

vector<int> dp(100005, -1);

int dfs(int v) {
  if (dp[v] != -1) return dp[v];
  if (graph[v].size() == 0) return dp[v] = 0;
  int max_path = INT_MIN;
  for (int x : graph[v]) {
    max_path = max(max_path, dfs(x));
  }
  return dp[v] = 1 + max_path;
}

void solve() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m ; i++) {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
  }
  int ans = -1;
  for (int i = 1 ; i <= n ; i++) {
    ans = max(ans, dfs(i));
  }
  cout << ans;
}

int main() {
  FastIO
  solve();
  return 0;
}