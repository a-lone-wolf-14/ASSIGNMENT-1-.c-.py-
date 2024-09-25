#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%i",&x);
    
    int st=1;
    int i;

    for(i=2;i<x;i++)
    {
        if (x%i==0)
        {
            st=0;
        }       
    }

    if (st==0)
    {
        printf("Not a Prime Number");
    }
    else if (st==1)
    {
        printf("Prime Number");
    }
    else if (x==2)
    {
        printf("Prime Number");
    }

    return 0;
}