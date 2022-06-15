#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("enter a string\n");
scanf("%s",str);
int i;
for(i=strlen(str);i>=0;i--){
	printf("%c",str[i]);
}
return 0;
}
