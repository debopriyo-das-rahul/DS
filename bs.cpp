#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int binary_search(int arr[], int l, int r, int x) {
  while (l <= r) {
    int m = (l + r) / 2;
    if (arr[m] == x) {
      return m;
    }
    if (arr[m] < x) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }
  return -1;
}
int main() {
  int arr[] = {2, 3, 4, 5, 6, 100, 747, 10, 89};
  int x = 10;
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  int result = binary_search(arr, 0, n - 1, x);
  if (result == -1) {
    cout << "element not present" << endl;
  } else {
    cout << "element is present" << endl;
  }
}