#include <stdio.h>
int main()
{
    int num1, num2,num3, large,small;

    printf("Input Three Integer Numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2)
        large=num1;
    else if (num2>num3)
        large=num2;
    else
        large=num3;

    if(num1<num2)
        small=num1;
    else if (num2<num3)
        small=num2;
    else
        small=num3;

    printf("%d is the largest value.\n",large);
    printf("%d is the smallest value.",small);


    return 0;
}

