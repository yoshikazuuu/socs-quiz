#include<stdio.h>

int main(){
	char s[100];
	int n;
	
	scanf("%d %[^\n]s",&n, &s);
	getchar();
	scanf("%d %[^\n]s",&n, &s);
	getchar();
	scanf("%d %[^\n]s",&n, &s);
	getchar();
	
	char ss[100];
	ss[0]=s[n];
	ss[1]=s[1];
	
	printf("%s\n",&ss, s);
	printf("%s\n",&ss, s);
	printf("%s\n",&ss, s);
	
return 0;
}
