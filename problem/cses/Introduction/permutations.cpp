/*
This CP questions is sucks
*/

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1;
  } else if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
  } else if (n >= 4) {
    int size_odd = (n + 1) / 2;
    int size_even = n / 2;

    int even[size_even];
    int odd[size_odd];

    int idx = 0;
    for (int i = 1; i <= n; i += 2) {
      odd[idx] = i;
      if (i + 1 <= n) {
        even[idx] = i + 1;
      }
      idx++;
    }

    int marge_array[size_odd + size_even];

    if (n == 4) {
      for (int i = 0; i < size_even; i++) {
        marge_array[i] = even[i];
      }
      for (int i = 0; i < size_odd; i++) {
        marge_array[size_odd + i] = odd[i];
      }
    } else {
      for (int i = 0; i < size_odd; i++) {
        marge_array[i] = odd[i];
      }
      for (int i = 0; i < size_even; i++) {
        marge_array[size_odd + i] = even[i];
      }
    }

    for (int i = 0; i < n; i++) {
      cout << marge_array[i] << " ";
    }
  }

  return 0;
}
