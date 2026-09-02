#include <iostream>
#include <string>

using namespace std;
int main() {
  string n;
  cin >> n;
  int max_count = 0, current_count = 0;
  for (int i = 0; i < n.length(); i++) {
    if (i > 0 && n[i - 1] == n[i]) {
      current_count++;
      max_count = max(max_count, current_count);
    } else {
      current_count = 1;
      max_count = max(max_count, current_count);
    }
  }
  cout << max_count << endl;
  return 0;
}
