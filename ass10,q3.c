#include<stdio.h>
//Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)
 int EvenOdd(int);
int main()
{
int num,evenodd;
printf("enter the number");
scanf("%d",&num);
evenodd=EvenOdd(num);
printf("%d",evenodd);
return 0;
}
int EvenOdd( int x)
{
 if(x%2==0)
 {
   return 1;
 }
 else{
   return 0;
 }


}
