#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<vector<ll>> dp(1003, vector<ll>(1003, -1));

int f(vector<string> &grid, int x, int y, int w, int h) {
  if (x == w) return 0;
  if (y == h) return 0;
  if (dp[x][y] != -1) return dp[x][y];
  if (grid[y][x] == '#') return dp[x][y] = 0;
  if (x == w-1 && y == h-1) return dp[x][y] = 1;
  ll steps = f(grid, x+1, y, w, h) + f(grid, x, y+1, w, h);
  return dp[x][y] = steps % MOD;
}

void solve() {
  int h, w;
  cin >> h >> w;
  vector<string> grid(h);
  for (int i = 0 ; i < h ; i++) cin >> grid[i];
  int ans = f(grid, 0, 0, w, h);
  cout << ans;
}

int main() {
  FastIO
  solve();
  return 0;
}