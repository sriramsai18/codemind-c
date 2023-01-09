#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",'A'-1 + i);
        }
        printf("
");
    }
}