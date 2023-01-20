#include <stdio.h>
#include <string.h>
#define ll long long

void solve() {
  char s[101];
  int occur[27];
  int loc[101];

  // set semua varibel occur ke 0
  for (int i = 0; i < 27; i++) {
    occur[i] = 0;
  }

  scanf("%s", s);
  for (int i = 0; i < strlen(s); i++) {
    // hitung banyak berapa occurences untuk setiap karakter
    occur[s[i] - 'a' + 1]++;
  }

  int a = 0;
  // temukan lokasi occurences yang tidak 0
  for (int i = 0; i < 27; i++) {
    if (occur[i] != 0) {
      loc[a] = i;
      a++;
    }
  }

  // cek setiap occurences agar selalu sama
  for (int i = 0; i < a - 1; i++) {
    // ketika occurences tidak sama maka "NOT EQUAL"
    if (occur[loc[i]] != occur[loc[i + 1]]) {
      printf("NOT EQUAL");
      return;
    }
  }

  // cek juga banyak karakter unik harus lebih dari 1
  (a - 1) ? printf("EQUAL") : printf("NOT EQUAL");
}

int main() {
  ll n;
  scanf("%lld", &n);

  // cetak setiap case diawal
  for (int i = 0; i < n; i++) {
    printf("Case #%d: ", i + 1);
    solve();
    printf("\n");
  }
  return 0;
}