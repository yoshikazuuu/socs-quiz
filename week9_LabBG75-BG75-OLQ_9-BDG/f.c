#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main() {
  ll n, total = 0;
  scanf("%lld", &n);
  while (n--) {
    char digits[11];
    scanf("%s", digits);
    int len = strlen(digits);

    for (int i = 0; i < len - 1; i++) {
      for (int j = 0; j < len - i - 1; j++) {
        if (digits[j] > digits[j + 1]) {
          char temp = digits[j];
          digits[j] = digits[j + 1];
          digits[j + 1] = temp;
        }
      }
    }

    total = (total + (ll)atoi(digits));
  }
  printf("%lld\n", total % 24561);
}