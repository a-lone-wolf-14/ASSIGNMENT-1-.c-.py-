#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%i",&a);
    
    int b;
    printf("Enter the value of b: ");
    scanf("%i",&b);

    int c;
    printf("Enter the value of c: ");
    scanf("%i",&c);

    printf("a=%i\n",a);
    printf("b=%i\n",b);
    printf("c=%i\n",c);

    if (a>=b && a>=c)
    {
        printf("a=%i is the greatest integer",a);
    }
    
    else if (b>=a && b>=c)
    {
        printf("b=%i is the largest number",b);
    }
    
    else
    {
        printf("c=%i is the largest number",c);
    }
    
    return 0;
}