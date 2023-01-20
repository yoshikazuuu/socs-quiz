// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       if (arr[j] > arr[j + 1]) {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
// }

// int main() {
//   int arr[] = {12, 412, 1234, 523, 1253, 456};
//   bubbleSort(arr, 6);
//   for (int i = 0; i < 6; i++) {
//     printf("%d ", arr[i]);
//   }
// }

#include <stdio.h>

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

int main() {
  int arr[] = {12, 412, 1234, 523, 1253, 456};
  selectionSort(arr, 6);
  for (int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
  }
}