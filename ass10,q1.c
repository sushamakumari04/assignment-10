#include<stdio.h>
//TSRS
int areaCircle( float);
int  main()
{
float area,radius;
printf("enter the radius of circle");
scanf("%f",&radius);
area = areaCircle(radius);
printf("area of circle is %f",area);

return 0;
}

int areaCircle(float r)
{
 float c;
 c=3.14*r*r;
 return c;

}
