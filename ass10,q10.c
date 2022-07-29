#include<stdio.h>
int primeFactor(int);
int main(){
primeFactor(36);

return 0;
}
int primeFactor(int n)
{
    int i;
  for( i=2;n!=1;i++)
  {
   while(n%i==0)
   {
    n=n/i;
    printf("%d ,",i);
   }
  }


}
