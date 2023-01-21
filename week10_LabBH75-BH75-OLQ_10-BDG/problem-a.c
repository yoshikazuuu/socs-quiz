#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b);
void solve();

int main() {
  solve();
  return 0;
}

int compare(const void *x, const void *y) { return (*(int *)y - *(int *)x); }

void solve() {
  int N;
  int P[1000];
  double D[1000];

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &P[i]);
  }

  qsort(P, N, sizeof(int), compare);

  for (int i = 0; i < N; i++) {
    if (i == 0) {
      D[i] = P[i] * 0.3;
    } else if (i >= 1 && i <= 2) {
      D[i] = P[i] * 0.5;
    } else if (i >= 3 && i <= 5) {
      D[i] = P[i] * 0.7;
    } else if (i >= 6 && i <= 9) {
      D[i] = P[i] * 0.9;
    } else {
      D[i] = P[i] * 0.95;
    }
  }

  for (int i = 0; i < N; i++) {
    printf("%d ", (int)D[i]);
  }
}