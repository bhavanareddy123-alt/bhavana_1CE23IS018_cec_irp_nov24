#include<stdio.h>
int main()
{
    char ch;
    printf(("Enter a upper case element"))
    scanf("%c",&c);
    if(c>='A'&&c<='Z')
    {
        c=c+('a'-'A');
        printf("%c",c);
    }
    else if(c>='a'&&c<='z')
    {
        c=c-('a'-'A');
        printf("%c",c);
    }
    else
    printf("Invalid input")
}