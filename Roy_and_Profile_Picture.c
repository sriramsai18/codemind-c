#include<stdio.h>
int main()
{
    int I,n;
    scanf("%d%d",&I,&n);
    int w,h,i;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&w,&h);
        if(w<I||h<I)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w>=I&&h>=I)
        {
            if(w==h)
            printf("ACCEPTED
");
            else 
            printf("CROP IT
");
        }
    }
}