//Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)
#include<stdio.h>
int Permutation(int ,int);
int factorial(int);
int main()
{
int n,r;
printf("enter the value of n,r");
scanf("%d%d",&n,&r);
int c = Permutation(n,r);
printf("%d ",c);

return 0;
}
int Permutation(int n,int r)
{
 int per;
 per = factorial(n)/factorial(n-r);
 return per;
}
int factorial(int num)
{ int Ft;
  if(num==1|| num==0)
  {
   return 1;
  }
Ft= num*factorial(num-1);
return Ft;
}

