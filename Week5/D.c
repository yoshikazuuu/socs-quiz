#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main(){
  unsigned long long n, count = 0, tc, ts, tv;
  scanf("%d", &n);
  while(n--){
    scanf("%llu %llu %llu", &tc, &ts, &tv);
    if(ts > tv){
      count++;
    }
  }
  printf("%llu\n", count);
  return 0;
}