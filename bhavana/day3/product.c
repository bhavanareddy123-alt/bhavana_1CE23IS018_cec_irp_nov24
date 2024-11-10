#include<stdio.h>
int main()
{
    int a=0,b=-99;
    long r=0;
    scanf("%i%d",&a,&b);
    for(;b>0;r+=a,b--);
    printf("product = %1d",r);
    return 0;
    
}