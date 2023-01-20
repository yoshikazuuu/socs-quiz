#include <stdio.h>
#define ll long long

void solve() {
  ll n, seats;
  scanf("%lld %lld", &n, &seats);
  ll occupiedSeats[seats];

  // masukkan inputan kedalam variabel
  for (int i = 0; i < seats; i++) {
    scanf("%lld", &occupiedSeats[i]);
  }

  // cek untuk setiap i dan i+1 apakah jaraknya memungkikan untuk occupy
  for (int i = 0; i < seats - 1; i++) {
    // jika suatu range ketemu langsung cetak dan return ke fungsi main
    if (occupiedSeats[i + 1] - occupiedSeats[i] >= n + 1) {
      printf("%lld %lld", occupiedSeats[i], occupiedSeats[i + 1]);
      return;
    }
  }

  // jika kondisi diatas tidak memenuhi maka cetak "-1"
  printf("-1");
}

int main() {
  ll n;
  scanf("%lld", &n);

  // cetak sesuai ketentuan output dan panggil solve()
  for (int i = 0; i < n; i++) {
    printf("Case #%d: ", i + 1);
    solve();
    putchar('\n');
  }

  return 0;
}