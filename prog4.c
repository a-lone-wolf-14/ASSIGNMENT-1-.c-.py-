#include<stdio.h>

int main()
{
    char check;
    printf("Enter the character: ");
    scanf("%c",&check);

    if (check=='a'||check=='A'||check=='e'||check=='E'||check=='i'||check=='I'||check=='o'||check=='O'||check=='u'||check=='U')
    {
        printf("The character %c is a vowel",check);
    }
    else
    {
        printf("The character %c is a consonant",check);
    }
    
    return 0;
}