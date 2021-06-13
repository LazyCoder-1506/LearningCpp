#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  map<char, int> mp;
  mp['a'] = 1;
  mp['b'] = 2;
  mp['c'] = 3;
  mp['d'] = 4;
  mp['e'] = 5;
  mp['f'] = 6;
  mp['g'] = 7;
  mp['h'] = 8;
  int sc = mp[s[0]];
  int sr = s[1] - '0';
  int tc = mp[t[0]];
  int tr = t[1] - '0';

  int steps = max(abs(sr - tr), abs(sc - tc));
  cout << steps << "\n";

  int hor = tc - sc;
  int ver = tr - sr;

  for (int i = 1; i <= abs(hor); i++) {
    string move = "";
    if (hor < 0) {
      move = "L";
    }
    else {
      move = "R";
    }
    if (abs(ver) >= i) {
      if (ver < 0) {
        move += "D";
      }
      else {
        move += "U";
      }
    }
    cout << move << "\n";
  }

  for (int i = 1; i <= abs(ver) - abs(hor); i++) {
    if (ver < 0) {
      cout << "D\n";
    }
    else {
      cout << "U\n";
    }
  }
  return 0;
}