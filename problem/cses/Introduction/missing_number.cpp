#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  long long x;
  long long result = 0;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    cin >> x;
    result += x;
  }
  result = (n * (n + 1)) / 2 - result;
  cout << result << endl;
  return 0;
}
