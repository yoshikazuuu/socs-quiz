#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main(){
  int n, p, j, l, b, sum = 0, tp = 3;
  float av;
  scanf("%d", &n); getchar();
  scanf("%d %d %d", &j, &l, &b); getchar();
  sum = j + l + b;
  for(int i = 0; i < n; i++){
    scanf("%d", &p); getchar();
    sum += p;
    tp++;
  }
  av = sum / (float)tp;

  if(j >= av){
    printf("Jojo lolos\n");
  }
  else{
    printf("Jojo tidak lolos\n");
  }
  if(l >= av){
    printf("Lili lolos\n");
  }
  else{
    printf("Lili tidak lolos\n");
  }
  if(b >= av){
    printf("Bibi lolos\n");
  }
  else{
    printf("Bibi tidak lolos\n");
  }
  return 0;
}