#include<stdio.h>
int main(){
int array[100],n,i,min,max;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++){
	scanf("%d",&array[i]);
}
min=array[0];
max=array[0];
for(i=1;i<n;i++){
	if(min>array[i]){// logic for minimum number finding
		min=array[i];
	}
	if(max<array[i]){//logic for finding maximum finding max
		max=array[i];
	}
}
printf("minimum number is %d\n",min);
printf("maximum number is %d\n",max);
return 0;
}
