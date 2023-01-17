#include <math.h>
#include <stdio.h>
#define ll long long

ll binarySearch(ll m) {
  ll low = 1, high = m, mid;
  while (low < high) {
    mid = low + (high - low) / 2;
    ll bruh = (mid * (mid + 1) * (2 * mid + 1)) / 6;
    if (bruh == m)
      return mid;
    else if (bruh < m)
      low = mid + 1;
    else
      high = mid;
  }
  return low;
}

void solve() {
  ll m;
  scanf("%lld", &m);
  printf("%lld\n", binarySearch(m));
}

int main() {
  int t;
  scanf("%d", &t);
  getchar();
  for (int i = 1; i <= t; i++) {
    printf("Case #%d: ", i);
    solve();
  }
}