#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n) {
  int i, j, x;
  for (i = 1; i < n; i++) {
    j = i - 1;
    x = arr[i];
    while (j > -1 && arr[j] > x) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = x;
  }
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
  insertionSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << i[arr] << " ";
  }
}