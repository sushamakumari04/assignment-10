#include<stdio.h>
//TSRS
int SimpleInterest( float ,float, int );
int main()
{
int t;
float p,r,SI;
printf("enter the value of p,r,t");
scanf("%f%f%d",&p,&r,&t);
SI=SimpleInterest(p,r,t);
printf("%f",SI);
return 0;
}
int SimpleInterest( float x,float y,int z)
{
float si;
si= (x*y*z)/100;
return si;
}
