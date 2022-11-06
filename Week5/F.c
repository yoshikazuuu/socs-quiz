#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main(){
  int t, mid, ratusan, puluhan, satuan;
  scanf("%d", &t);
  mid = (int)(t / 2);
  int a[t];
  for(int i = 0; i < t; i++){
    scanf("%d", &a[i]);
  }
  printf("%d", a[mid-1]);
  printf("%d", a[mid]);
  printf("%d\n", a[mid+1]);
  return 0;
}