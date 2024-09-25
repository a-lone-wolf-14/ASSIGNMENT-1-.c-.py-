#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%i",&year);

    if (year%400==0)
    {
        printf("The year %i is a leap year",year);
    }
    else 
    {
        if (year%100==0)
        {
            printf("The year %i is not a leap year",year);
        }
        else if (year%4==0)
        {
            printf("The year %i is a leap year.",year);
        }
        else
        {
            printf("The year %i is not a leap year",year);
        }
    }
    
    return 0;
}