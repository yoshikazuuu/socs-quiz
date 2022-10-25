#include<stdio.h>

int main(){
	int x=3,n;
	char s[102];
	
	for(int i = 0; i < x;i++){
	scanf("%d",&n);
	scanf("%[^\n]",s);
	
	char newS[102] = {'\0'};
	newS[0]=s[n];
	newS[1]=s[1];

	printf("%s\n",newS);
	}
return 0;
}
