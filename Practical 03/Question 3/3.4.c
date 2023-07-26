
#include <stdio.h>
int main()
{
    int dia,circum,area, rad ;

       printf("Input the Radius of Circle:");
       scanf("%d",&rad);

       dia=2*rad;
       printf("Diameter of a Circle = %d\n",dia);

       circum=2*3.14159*rad;
       printf("Circumference of a Circle = %d\n",circum);

       area=3.14159*rad*rad;
       printf("Area of a Circle = %d\n",area);



    return 0;
}
