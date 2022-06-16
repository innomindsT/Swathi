#include<stdio.h>
int func(int n){
	int fact=1;
	while(n!=0){
		fact=n*fact;
		n=n-1;
	}
	return fact;
}
int main(){
	int n,h,i,j,r;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			r=n-j;
			h=func(n)/(func(j)*func(r));
			printf("%d",h);
		}
		printf("\n");
	}
	return 0;
}
	
