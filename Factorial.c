#include<stdio.h>
int main()
{
    int n,f=1;
    scanf("%d",&n);
    while(n>0)
    {
        f=f*n;
        n=n-1;
    }
    printf("Factorial is %d",f);
    return 0;
}
