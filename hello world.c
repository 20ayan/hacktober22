#include<stdio.h>
#define PI 3.14159
int main ()
{
    double area=0, radius=0, circumferance=0;
	printf("enter radius:");
	scanf("%lf", &radius);
	area= PI*radius*radius;
	circumferance= 2*PI*radius;
	printf("radius of %lf meters\n" " area is %lf sq meter\n" "circumferance is %lf meters", radius, area, circumferance);
}
