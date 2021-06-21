#include <bits/stdc++.h>
using namespace std;

int main() {
  long double m, n, a;
  cin >> m >> n >> a;
  long long int b = ceil(n / a);
  long long int l = ceil(m / a);
  cout << (b * l) << "\n";
  return 0;
}