#include<stdio.h>
#include<math.h>
int main()
{
    float r,a,c,d;
    printf("please enter the radius of a circle\n");
    scanf("%f",&r);
    
    d=2*r;
    c=2*3.14*r;
    a=3.14*(r*r);
    printf("diameter of circle=%f\n",d);
    printf("circumference of a circle=%f\n",c);
    printf("area of a circle=%f\n",a);
    return 0;
}