#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long operations = 0;
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      operations += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1];
    }
  }
  cout << operations << endl;
  return 0;
}
