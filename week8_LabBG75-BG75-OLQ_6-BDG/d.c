#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int solve(int *heights, int n) {
  qsort(heights, n, sizeof(int), cmp);
  int diff = 0;
  for (int i = 0; i < n - 1; i++) {
    if (n / 2 - 1 == i)
      continue;
    diff = fmax(diff, abs(heights[i] - heights[i + 1]));
  }
  return diff;
}

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    int *heights = malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
      scanf("%d", &heights[j]);
    }
    printf("Case #%d: %d\n", i + 1, solve(heights, n));
    free(heights);
  }
  return 0;
}
