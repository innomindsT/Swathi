#include<stdio.h>
int main(){
int n,i;
printf("enter a number");
scanf("%d",&n);
while(n!=0){
	while(n%2==0){
		printf("%d\n",2);
		n=n/2;
	}
	for(i=3;i<n;i++){
		if(n%i==0){
			printf("%d\n",i);
			n=n/i;
		}
	}
}
return 0;
}		
