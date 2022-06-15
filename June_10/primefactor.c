#include<stdio.h>
//program to find the prime factors of number
int primeFactors(int n)
{
  int c = 2;
  while (n > 1) {//If n is less than 1 then loop will be terminated
    if (n % c == 0) {
      printf("%d\n",c);
      n=n/c;
    }
    else
      c++;
  }
}
int main()
{
  int n ;
  printf("enter a number");
  scanf("%d",&n);
  primeFactors(n);
  return 0;
}
