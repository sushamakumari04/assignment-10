#include<stdio.h>
//Write a function to print first N natural numbers (TSRN)
 int printN(int);
int main()
{
int num;
printf("enter the natural number you want to print ");
scanf("%d",&num);
printN(num);



return 0;
}

int printN(int n)
{
  for(int i=1;i<=n;i++){
   printf("%d ",i);
  }



}
