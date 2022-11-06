#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main(){
  int s, x, n, i = 1;

  scanf("%d %d %d", &s, &x, &n);

  printf("%d", s);
  while(i <= n){
    printf(" %d", s += i++ * x);
    if(i > n) break;
    printf(" %d", s -= i++ * x);
  }
  printf("\n");
  return 0;
}