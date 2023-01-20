#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define min(a, b) ((a) < (b)) ? (a) : (b)
#define max(a, b) ((a) > (b)) ? (a) : (b)

typedef struct {
  int happiness;
  int weight;
} Beef;

int findMinWeight(Beef set[], int n, int sum, int weight) {
  if (sum == 0)
    return weight;
  if (n == 0)
    return INT_MAX;

  if (set[n - 1].happiness > sum)
    return findMinWeight(set, n - 1, sum, weight);

  int weight1 = findMinWeight(set, n - 1, sum, weight);
  int weight2 = findMinWeight(set, n - 1, sum - set[n - 1].happiness,
                              weight + set[n - 1].weight);

  return min(weight1, weight2);
}

bool isSubsetSum(Beef set[], int n, int sum) {
  if (sum == 0)
    return true;
  if (n == 0)
    return false;

  if (set[n - 1].happiness > sum)
    return isSubsetSum(set, n - 1, sum);

  return isSubsetSum(set, n - 1, sum) ||
         isSubsetSum(set, n - 1, sum - set[n - 1].happiness);
}

void solve() {
  int n, m, minimum = 0;
  scanf("%d %d", &n, &m);
  Beef data[n];

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &data[i].happiness, &data[i].weight);
    getchar();
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (data[i].weight > data[j].weight) {
        Beef temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      } else if (data[i].happiness > data[j].happiness) {
        Beef temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      }
    }
  }

  if (isSubsetSum(data, n, m) == true) {
    int minWeight = findMinWeight(data, n, m, 0);
    printf("%d\n", minWeight);
  } else {
    printf("Impossible\n");
  }
}

int main() {
  int t;
  scanf("%d", &t);
  getchar();
  for (int i = 1; i <= t; i++) {
    printf("Case #%d: ", i);
    solve();
  }
}
