#include<stdio.h>
int main(){
int arra[10][10],i,j,c,r;
printf("enter the number of rows");
scanf("%d",&r);
printf("enter the number of columns");
scanf("%d",&c);
printf("enter the elements of the matrix");
for(i=0;i<r;++i){
	for(j=0;j<c;++j){
		scanf("%d",&arra[i][j]);
	}
}
printf("elements are\n");
for(i=0;i<r;++i){
	for(j=0;j<c;++j){
		printf("%4d",arra[i][j]);
	}
	printf("\n");
}
printf("transpose matrix\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%4d",arra[j][i]);
	}
	printf("\n");
}
return 0;
}

