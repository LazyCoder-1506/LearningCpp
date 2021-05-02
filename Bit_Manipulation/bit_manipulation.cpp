#include <iostream>
using namespace std;

int getBit(int n, int pos) {
  return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos) {
  return (n | (1 << pos));
}

int clearBit(int n ,int pos) {
  int mask = ~(1 << pos);
  return (n & mask);
}

int toggleBit(int n, int pos) {
  return (n xor (1 << pos));
}

int updateBit(int n, int pos, int value) {
  int mask = ~(1 << pos);
  n = n & mask;
  return (n | (value << pos));
}

int main() {
  cout << "Get bit result : " << getBit(5, 2) << endl;
  cout << "Set bit result : " << setBit(5, 2) << endl;
  cout << "Clear bit result : " << clearBit(5, 2) << endl;
  cout << "Toggle bit result : " << toggleBit(5, 2) << endl;
  cout << "Update bit result : " << updateBit(5, 2, 1) << endl;
  return 0;
}