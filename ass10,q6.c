#include<stdio.h>
//Write a function to calculate the factorial of a number. (TSRS)

int factorial(int);
int main()
{
int f,fact;
printf("enter the number");
scanf("%d",&f);
fact = factorial(f);
printf("%d ",fact);


return 0;
}

int factorial(int n)
{
  int Ft;
  if(n==1|| n==0)
  {
   return 1;
  }
Ft= n*factorial(n-1);
return Ft;



}
