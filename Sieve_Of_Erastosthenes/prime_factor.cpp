#include <iostream>
using namespace std;

void primeFactor(int n) {
  int spf[100] = {0};    // shortest prime factor array
  for (int i = 2; i <= n; i++) {
    spf[i] = i;    // initially every number's shortest prime factor is itself
  }
  for (int i = 2; i<=n; i++) {    // now marking the spf for each number
    if (spf[i] == i) {    // spf is itself hence it is a prime number, so time to mark factors
      for (int j = i * i; j <= n; j += i) {   // any factor smaller than i*i is already marked by a smaller prime
        if (spf[j] == j) {    // not marked with spf yet, so need to mark it
          spf[j] = i;
        }
      }
    }
  }
  while(n != 1) {
    cout << spf[n] << " ";    // find the spf of n, then divide n by that spf and continue
    n = n/spf[n];
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter number : ";
  cin >> n;
  primeFactor(n);
  return 0;
}