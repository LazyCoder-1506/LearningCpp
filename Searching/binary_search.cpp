#include <iostream>
using namespace std;

int main() {
  int n, key;
  cout << "Enter size of array : ";
  cin >> n;
  int arr[n];
  cout << "Enter sorted array elements : " << endl;
  for(int i = 0; i< n; i++){
    cin >> arr[i];
  }
  cout << "Enter key to be found : ";
  cin >> key;
  int left = 0, right = (n - 1), mid = 0;
  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == key) {
      cout << "Key found at index " << mid << endl;
      return 0;
    }
    else if (arr[mid] < key) {
      left = mid + 1;
    }
    else {
      right = mid - 1;
    }
  }
  cout << "Element not found" << endl;
  return 0; 
}