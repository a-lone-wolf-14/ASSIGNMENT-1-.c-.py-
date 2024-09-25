#include<stdio.h>

int power();
int digit;

int main()
{
    printf("Enter the number of digits of the number: ");
    scanf("%i",&digit);

    int x;
    printf("Enter the number: ");
    scanf("%i",&x);

    int num;
    for (int i=1;x>0;i*=10)
    {
        int r=x%10;
        x=x/10;
        num+=r*(power()/i);
    }
    printf("Reversed Number: %i",num);
    
    return 0;
}

int power()
{
    int power=1;

    for (int j=1; j<digit; j++)
    {
        power*=10;
    }
    return power;
}