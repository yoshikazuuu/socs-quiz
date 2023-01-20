#include <math.h>
#include <stdio.h>
#include <string.h>
#define ll long long

ll n;

typedef struct {
  char name[41];
  ll a;
  ll b;
  ll c;
} Student;

typedef struct {
  char name[41];
  double avg;
} Average;

int main() {
  scanf("%lld", &n);
  getchar();
  Student data[n];
  Average dataAvg[n];

  for (int i = 0; i < n; i++) {
    scanf("%[^#]#%lld#%lld#%lld\n", data[i].name, &data[i].a, &data[i].b,
          &data[i].c);
  }

  for (int i = 0; i < n; i++) {
    dataAvg[i].avg = floor((double)(data[i].a + data[i].b + data[i].c) / 3);
    strcpy(dataAvg[i].name, data[i].name);
  }

  for (int j = 0; j < n - 1; j++) {
    for (int k = j + 1; k < n; k++) {
      if (dataAvg[j].avg > dataAvg[k].avg) {
        Average temp = dataAvg[j];
        dataAvg[j] = dataAvg[k];
        dataAvg[k] = temp;
      } else if (dataAvg[j].avg == dataAvg[k].avg &&
                 strcmp(dataAvg[j].name, dataAvg[k].name) > 0) {
        Average temp = dataAvg[j];
        dataAvg[j] = dataAvg[k];
        dataAvg[k] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("Case #%d: %s - %.2lf\n", i + 1, dataAvg[i].name, dataAvg[i].avg);
  }

  return 0;
}