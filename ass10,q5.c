#include<stdio.h>
//Write a function to print first N odd natural numbers. (TSRN)
printOddN(int);
int main(){
int num;
printf("enter the value num");
scanf("%d",&num);
printOddN(num);


return 0;
}
int printOddN(int n){
 for(int i=1;i<=n;i+=2){
   printf("%d  ",i);

 }


}
