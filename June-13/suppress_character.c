//C program for suppressing character from a given string...

#include<stdio.h>
#include<stdio_ext.h>
int main(void)
{
	char str[50];
	char c;
	int j,i = 0;
	printf("enter a string\n");
	scanf("%s",str);
	printf("enter character to suppressed\n");
	scanf("%c",&c);
	for(i = 0 ; str[i] != '\0' ; i++)
	{
	
	      		if(str[i] == c)
			{
				for( j = i  ; str[j] != '\0' ; ++j)
				{
					str[j] = str[j + 1];
			
						
				}					
			str[j] = '\0';
			i = 0 ;
			}
         	       			
	}

	printf("string after suppressing character %c is %s \n",c,str);
return 0;
}	
