//Write a function to check whether a given number contains a given digit or not.
//(TSRS)
#include<stdio.h>
int main()
{
int n,d,GN;
printf("enter the given number");
scanf("%d",&n);
printf("enter the digit");
scanf("%d",&d);
GN = GivenNumber(n,d);
printf("%d",GN);
return 0;
}

int GivenNumber(int n,int d)
{
 int r;
  while(n!=0)
  {
    r=n%10;
    if(r==d)
    {
      return r;
      break;
    }
    n=n/10;

  }
  return 0;
}
