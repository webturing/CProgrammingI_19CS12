#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 5;
  int a[n][n];
  memset(a, 0, sizeof(a));
  int x = n - 1, y = n / 2;
  a[x][y] = 1;
  for (int i = 2; i <= n * n; i++) {
    int nx = (x + 1) % n;
    int ny = (y + 1) % n;
    if (a[nx][ny]) {
      nx = (x - 1 + n) % n;
      ny = y;
    }
    a[x = nx][y = ny] = i;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
