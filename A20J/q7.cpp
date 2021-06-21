#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  map<int, int> friends;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    friends.insert({x, i + 1});
  }
  for (auto itr = friends.begin(); itr != friends.end(); itr++) {
    cout << itr->second << " ";
  }
  cout << "\n";
}

signed main() {
  solve();
  return 0;
}