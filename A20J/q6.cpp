#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  int rx = 0, ry = 0, rz = 0;
  for (int i = 0; i < n ; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    rx += x;
    ry += y;
    rz += z;
  }
  if (rx || ry || rz) {
    cout << "NO\n";
  }
  else {
    cout << "YES\n";
  }
}

signed main() {
  solve();
  return 0;
}