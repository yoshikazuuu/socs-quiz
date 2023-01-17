#include <stdio.h>
#include <string.h>

#define MAX_N 50

typedef struct {
  char name[MAX_N + 1];
  int number;
} Data;

int main(void) {
  int t;
  scanf("%d", &t);

  for (int i = 1; i <= t; i++) {
    int n;
    scanf("%d", &n);
    getchar();
    Data data[MAX_N];
    for (int j = 0; j < n; j++) {
      scanf("%[^#]#%d\n", data[j].name, &data[j].number);
    }

    for (int j = 0; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (data[j].number < data[k].number) {
          Data temp = data[j];
          data[j] = data[k];
          data[k] = temp;
        } else if (data[j].number == data[k].number &&
                   strcmp(data[j].name, data[k].name) > 0) {
          Data temp = data[j];
          data[j] = data[k];
          data[k] = temp;
        }
      }
    }

    printf("Case #%d:\n", i);
    for (int j = 0; j < n; j++) {
      printf("%s - %d\n", data[j].name, data[j].number);
    }
  }
  return 0;
}
