#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void my_atoi(int *str,int base){
	int k, j,sum=0;
	k=atoi(str);
	for(j=0;j<base;j++){
		sum=sum+(k%base)*pow(base,j);
		k=k/base;
	}
	printf("%d\t",sum);
}
		
int main(){
	int base1;
	char str[50];
	
	printf("enter the string");
	scanf("%s",str);
	printf("enter the base to convert");
	scanf("%d",&base1);
	
	my_atoi(str,base1);
return 0;
}

