#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%i",&a);

    int b;
    printf("Enter the value of b: ");
    scanf("%i",&b);

    printf("a=%i\n",a);
    printf("b=%i\n",b);

    int sum=a+b;
    printf("Sum: %i\n",sum);

    int average=sum/2;
    printf("Average: %i\n",average);
    
    return 0;
}