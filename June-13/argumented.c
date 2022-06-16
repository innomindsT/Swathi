
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int a, b, c;
    if (argc < 4 || argc > 5)
    {
        printf("enter 4 arguments only eg.\"filename arg1 arg2 arg3!!\"");
        return 0;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    if (a < 0 || b < 0 || c < 0)
    {
        printf("enter only positive values in arguments !!");
        return 1;
    }
 
    if (!(a != b && b != c && a != c))
    {
        printf("please enter three different value ");
        return 1;
    }
    else
    {
        // Checking condition for "a" to be largest
        if (a > b && a > c)            
            printf("%d is largest", a);
 
        // Checking condition for "b" to be largest   
        else if (b > c && b > a)
            printf ("%d is largest", b);
 
        // Checking condition for "c" to be largest..
        else if (c > a && c > b)
            printf("%d is largest ",c);
    }
    return 0;
}

