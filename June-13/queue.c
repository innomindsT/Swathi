#include<stdio.h>
int addelement(int n,int arra[],int count){//adding the element at last of the array
	arra[count]=n;
	int i;
	count=count+1;
	printf("extended array");
	for(i=0;i<count;i++){
		printf("%4d",arra[i]);
	}
}
int remove_element(int n,int arra[],int count){//removing first element from the list
	int g=arra[0],i;
	for(i=0;i<count-1;i++){
		arra[i]=arra[i+1];
	}
	printf("array after removal of elements");
	for(i=0;i<count;i++){
		printf("%4d",arra[i]);
	}
	printf("removed element is %4d\n",g);
}
int main(){
	int arra[100],count,i,n;
	printf("enter the elements count ");
	scanf("%d",&count);
	printf("enter the elements in th e arrray");
	for(i=0;i<count;i++){
		scanf("%d",&arra[i]);
	}
	printf("enter element to be inserted");
	scanf("%d",&n);
	addelement(n,arra,count);
	remove_element(n,arra,count);
return 0;
}

	
