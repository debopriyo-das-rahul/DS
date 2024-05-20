#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int r, int l, int x) {
  int m = (l + r) / 2;
  if (l <= r) {
    if (arr[m] == x) {
      return m;
    } else if (arr[m] < x) {
      binarySearch(arr, m + 1, r, x);
    } else {
      binarySearch(arr, r, m - 1, x);
    }
  }
  return -1;
}
int main() {
  int n, x;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter array";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  cout << "Enter target :";
  cin >> x;
  int l = 0;
  int r = n - 1;
  int bs = binarySearch(arr, r, l, x);
  if (bs == -1) {
    cout << "Not found";
  } else {
    cout << "Found at index" << bs;
  }
}