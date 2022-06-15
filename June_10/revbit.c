#include<stdio.h>
int main(){
int n,i,j;
int a[]={1,2,3};
printf("enter a numberupto 7 \n");
scanf("%d",&n);
for(i=0;n>0;i++){
	a[i]=n%2;
	n=n/2;
}
for(i=i-1;i>=0;i--){
	printf("%d\n",a[i]);
}
int arraySize=sizeof(a);
int intSize=sizeof(a[0]);
int length=arraySize/intSize;
printf("length of the array is %d\n",length);
for(i=0;i<length;i++){
	printf("%d\n",a[i]);
}

return 0;
}
