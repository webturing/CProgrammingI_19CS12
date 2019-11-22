#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 200000;
bool prime(int n) {  // version 0: O(n)
  for (int i = 2; i <= n - 1; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

bool goldbach(int n) {
  for (int p = 3; p <= n / 2; p += 2) {
    if (prime(p) && prime(n - p)) {
      // cout<<p<<"+"<<n-p<<"="<<n<<endl;
      return true;
    }
  }
  return false;
}

int main() {
  ll start = clock();
  for (int n = 6; n <= N; n += 2) {
    if (!goldbach(n)) {
      cout << "Congratulations! The goldbach theory is wrong!" << endl;
    }
  }

  ll end = clock();
  cout << (end - start) / CLOCKS_PER_SEC << " Second(s)." << endl;
  return 0;
}
