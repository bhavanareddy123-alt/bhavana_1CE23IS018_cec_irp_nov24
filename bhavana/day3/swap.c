#include <stdio.h>

int main() {
    int m=10,n=20;
    scanf("%d%i",&m,&n);
    printf("before swap x=%d y=%i,x,y");
    m=m+n;
    n=m-n;
    m=m-n;
    printf("b swap x=%d y=%i,x,y");
    return 0;
}   

