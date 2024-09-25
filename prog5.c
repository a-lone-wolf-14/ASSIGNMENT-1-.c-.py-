#include<stdio.h>

int main()
{
    int grp1;
    printf("Enter the number of people with age below 12: ");
    scanf("%i",&grp1);

    int grp2;
    printf("Enter the number of people with age above (including) 12 and below 18: ");
    scanf("%i",&grp2);

    int grp3;
    printf("Enter the number of people with age above (including) 18 and below 60: ");
    scanf("%i",&grp3);

    int grp4;
    printf("Enter the number of people with age above (including) 60: ");
    scanf("%i",&grp4);

    int amt_grp1=grp1*5;
    int amt_grp2=grp2*10;
    int amt_grp3=grp3*20;
    int amt_grp4=grp4*15;

    int amt=amt_grp1+amt_grp2+amt_grp3+amt_grp4;

    printf("Total amount to be paid: %i",amt);

    return 0;
}