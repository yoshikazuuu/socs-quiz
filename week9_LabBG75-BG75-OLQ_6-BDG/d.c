#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 20

typedef struct {
  char id[11];
  char name[MAX_NAME_LEN + 1];
} Student;

int main() {
  freopen("testdata.in", "r", stdin);

  int n;
  scanf("%d", &n);

  Student students[n];

  for (int i = 0; i < n; i++) {
    scanf("%s %s", students[i].id, students[i].name);
  }

  int t;
  scanf("%d", &t);

  for (int i = 1; i <= t; i++) {
    char id[11];
    scanf("%s", id);

    int found = 0;
    for (int j = 0; j < n; j++) {
      if (strcmp(students[j].id, id) == 0) {
        found = 1;
        printf("Case #%d: %s\n", i, students[j].name);
        break;
      }
    }

    if (!found) {
      printf("Case #%d: N/A\n", i);
    }
  }

  return 0;
}
