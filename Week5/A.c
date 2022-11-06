#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  for(int i = 0; i < m; i++){
    printf("%d\n", n + i);
  }
  return 0;
}