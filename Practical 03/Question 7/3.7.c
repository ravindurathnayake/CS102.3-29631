#include <stdio.h>
int main()
{
    int bsalary,yofser,mosales;
    char city;
    double addAllow, bonus, grossRem;


    printf("Enter BAsic Salary :");
    scanf("%d",&bsalary);

    printf("Enter Year of Service:");
    scanf("%d",&yofser);

    printf("Enter city(C for Colombo) :");
    scanf("%c",&city);

    printf("Enter Monthly Sales (RS.) :");
    scanf("%d",&mosales);



    if(yofser>5)
        addAllow = bsalary*10/100;


    if(city=='c')
        addAllow+=2500;


    if (mosales>=0<=25000)
        bonus=mosales*10/100;

    else if(mosales>25000<=50000)
        bonus=bsalary*12/100;

    else if(mosales>50000)
        bonus=bsalary*15/100;


    grossRem =bsalary+addAllow+bonus;

    printf("Gross Monthly Remuneration: %.2f\n", grossRem);



    return 0;
}
