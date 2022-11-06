#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main(){
  unsigned long long int t;
  scanf("%llu", &t);
  unsigned long long int n, sum[10000], y;

  for(int l = 0; l < t; l++){
    scanf("%llu", &n);
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(i == 0){
          sum[j] = 0;
        }
        scanf("%llu", &y);
        sum[j] += y;
      }
    }
    printf("Case #%d:", l + 1);
    for(int i = 0; i < n; i++){
      printf(" %llu", sum[i]);
    }
    printf("\n");
  }
  return 0;
}