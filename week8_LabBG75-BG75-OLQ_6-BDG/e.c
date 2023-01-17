#include <stdio.h>
typedef long long ll;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

int steps = 0;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
  steps++;
}

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
}

int main() {
  ll t;
  scanf("%lld", &t);
  for (int j = 0; j < t; j++) {
    steps = 0;
    ll n, multiplier;
    scanf("%lld %lld", &n, &multiplier);
    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Case #%d: %lld\n", j + 1, steps * multiplier);
  }
}