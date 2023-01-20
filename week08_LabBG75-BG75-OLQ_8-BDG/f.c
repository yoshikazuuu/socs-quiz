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

void selectionSort(int arr[], int n) {
  int min_idx;
  for (int i = 0; i < n - 1; i++) {
    min_idx = i;
    for (int j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    if (min_idx != i)
      swap(&arr[min_idx], &arr[i]);
  }
}

int main() {
  ll n;
  scanf("%lld", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  selectionSort(arr, n);
  printf("%d\n", steps);
}