#include <iostream>
using namespace std;

void primeSieve(int n) {
  int sieve[200] = {0};

  for (int i = 2; i <= n; i++) {    // 2 is the first prime
    if (sieve[i] == 0) {    // not already marked, so a prime. Now mark all factors of i
      for (int j = i*i; j<=n ;j+=i) {    // all factors before i^2 will already be marked by some other smaller prime
        sieve[j]++;   // marking a factor as non-prime
      }
    }
  }

  for (int i = 2; i <= n; i++){
    if (sieve[i] == 0) {
      cout << i << " ";   // 0 means not marked, means prime
    }
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter limit : ";
  cin >> n;
  primeSieve(n);
  return 0;
}