#include <bits/stdc++.h>
using namespace std;
int linearSearchFreq(int arr[], int n, int x) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      cnt++;
    }
  }
  return cnt;
}
int main() {
  int n;
  cout << "Enter the size of array: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the array elements:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int target;
  cout << "Enter the target:" << endl;
  cin >> target;
  cout << "The element " << target << " occurs "
       << linearSearchFreq(arr, n, target) << " times in the array";
}