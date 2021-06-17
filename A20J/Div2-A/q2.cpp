#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  for (int i = 0; i < n ; i++) {
    string s;
    int x;
    cin >> s >> x;
    if (mp.find(s) == mp.end())
      mp.insert(pair<string, int>(s, x));
    else
      mp[s] += x;
  }

  for (auto i = mp.begin(); i != mp.end(); i++) {
    cout << i->first << "\t" << i->second << "\n";
  }
  return 0;
}