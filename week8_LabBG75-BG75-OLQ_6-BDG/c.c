#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int counter = 0;

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selectionSort(int arr[], int n) {
  int i, j, min_idx;

  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    if (min_idx != i)
      swap(&arr[min_idx], &arr[i]);
  }
}

void solve() {
  int t;
  long double mean, median, total = 0;
  scanf("%d", &t);
  int arr[t];
  for (int i = 0; i < t; i++) {
    scanf("%d", &arr[i]);
    total += arr[i];
  }

  mean = (long double)total / t;

  selectionSort(arr, t);

  if (t % 2 == 0) {
    median = (long double)(arr[t / 2 - 1] + arr[t / 2]) / 2;
  } else {
    median = arr[t / 2];
  }

  printf("Case #%d:\n", ++counter);
  printf("Mean : %.2Lf\n", mean);
  printf("Median : %.2Lf\n", median);
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
}