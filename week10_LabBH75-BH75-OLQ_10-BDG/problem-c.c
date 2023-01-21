#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int main() {
  solve();
  return 0;
}

void solve() {
  int N, i;
  char names[1000][1000], search[1000];

  scanf("%d", &N);
  getchar();

  for (i = 0; i < N; i++) {
    scanf("%s", names[i]);
    getchar();
  }

  scanf("%s", search);
  getchar();

  for (i = 0; i < N; i++) {
    if (strcmp(names[i], search) == 0) {
      printf("Case #%d: YES\n", i + 1);
    } else {
      printf("Case #%d: NO\n", i + 1);
    }
  }
}