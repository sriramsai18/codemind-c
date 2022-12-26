#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int s=pow(a,b);
    int v=s%c;
    printf("%d",v);
}