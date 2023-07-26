#include <stdio.h>
int main()
{
    int num1, num2, max;

    printf("Input Two Numbers :");
    scanf("%d%d",&num1, &num2);

    if(num1>num2)
    max=num1;
    else
    max=num2;

    printf("%d is the highest number.",max);


    return 0;
}
