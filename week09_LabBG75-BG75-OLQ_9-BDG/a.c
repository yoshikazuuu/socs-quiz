#include <stdio.h>
#define ll long long

void solve() {
  ll n, perimeter = 0, area = 0;
  scanf("%lld", &n);

  ll x[n + 2];
  x[0] = 0;
  x[n + 1] = 0;

  for (int i = 1; i <= n; i++) {
    scanf("%lld", &x[i]);
  }

  for (int i = 1; i <= n; i++) {
    ll diffLeft = x[i] - x[i - 1];
    ll diffRight = x[i] - x[i + 1];

    if (diffLeft < 0)
      diffLeft = 0;
    if (diffRight < 0)
      diffRight = 0;

    perimeter += (diffLeft + diffRight + 2) * 2;
    area += x[i] * 4;
  }

  printf("%lld %lld\n", perimeter, area);
}

int main() {
  freopen("testdata.in", "r", stdin);
  ll t;
  scanf("%lld", &t);
  getchar();
  for (int i = 1; i <= t; i++) {
    printf("Case #%d: ", i);
    solve();
  }
}