#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%i",&x);
    
    int sum=0;
    while (x>0)
    {
        int r=x%10;
        x=x/10;
        sum+=r;
    }
    printf("Sum: %i",sum);

    return 0;
}