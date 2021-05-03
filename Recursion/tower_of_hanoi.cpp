#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char final, char help) {
  if (n == 0) {   // base case
    return;
  }
  towerOfHanoi(n-1, src, help, final);
  cout << "Move from " << src << " to " << final << endl;
  towerOfHanoi(n-1, help, final, src);
}

int main() {
  towerOfHanoi(4, 'A', 'C', 'B');
  return 0;
}