#include<stdio.h>

int main()
{
    int p;
    printf("Enter the value of principal amount: ");
    scanf("%i",&p);

    int r;
    printf("Enter the value of rate of interest (in %): ");
    scanf("%i",&r);

    int t;
    printf("Enter the time period (in yrs): ");
    scanf("%i",&t);

    double si=(p*r*t)/100;
    printf("The Simple Interest is: %f\n",si);

    int amt=p+si;
    printf("The Amount is: %i\n",amt);

    return 0;
}