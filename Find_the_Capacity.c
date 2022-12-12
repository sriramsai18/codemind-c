#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int n;
    n=2*s*t*b*512;
    printf("%dKB",n/1024);
}