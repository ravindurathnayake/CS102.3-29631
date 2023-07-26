
#include <stdio.h>
int main()
{
    int emp,bsalary,inc,nsalary;
    char name[50];


    printf("Input Employee Name :");
    scanf("%s",&name);

    printf("Basic Salary:");
    scanf("%d",&bsalary);


    if(bsalary<5000)
        inc=bsalary*5/100;
    else if(bsalary>=5000<10000)
        inc=bsalary*10/100;
    else if(bsalary>=10000)
        inc=bsalary*15/100;

    nsalary =(bsalary+inc);

    printf("Input Employee Name is %S\n",&name);
    printf("New Salary =%d",nsalary);


    return 0;
}
