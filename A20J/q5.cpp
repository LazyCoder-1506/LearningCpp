#include <bits/stdc++.h>
using namespace std;

bool triangle(int a, int b, int c) {
  if (a >= b + c) {
    return false;
  }
  else {
    return true;
  }
}

bool detriangle(int a, int b, int c) {
  if (a == b + c) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  vector<int> arr;
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  sort(arr.begin(), arr.end(), greater<int>());

  if (triangle(arr[0], arr[1], arr[2]) || triangle(arr[1], arr[2], arr[3])) {
    cout << "TRIANGLE\n";
  }
  else if (detriangle(arr[0], arr[1], arr[2]) || detriangle(arr[1], arr[2], arr[3])) {
    cout << "SEGMENT\n";
  }
  else {
    cout << "IMPOSSIBLE\n";
  }
  return 0;
}