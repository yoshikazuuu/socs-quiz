#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void solve() {}

int main() {
  int n;
  int isHard = 0;
  scanf("%d", &n);
  while (n--) {
    int x;
    scanf("%d", &x);
    if (x) {
      isHard = x;
    }
  }
  (isHard) ? printf("not easy\n") : printf("easy\n");
}