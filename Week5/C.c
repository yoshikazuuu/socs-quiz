#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

int main(){
  int t;
  scanf("%d", &t); getchar();
  for(int i = 0; i < t; i++){
    char str[1000];
    int m;
    scanf("%s", &str); getchar();
    scanf("%d", &m); getchar();
    char awal[m], akhir[m];
    for(int j = 0; j < m; j++){
      scanf("%c", &awal[j]); getchar();
      scanf("%c", &akhir[j]); getchar();
      for(int k = 0; k < strlen(str); k++){
        if(str[k] == awal[j]){
          str[k] = akhir[j];
        }
      }
    }
    printf("Case #%d: %s\n", i + 1, str);
  }
  return 0;
}