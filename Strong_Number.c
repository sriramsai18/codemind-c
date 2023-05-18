#include<stdio.h>
int main()
{
    int a, b, c, d, s=0, f=1, i;
    scanf("%d",&a);
    b=a;
    while(a!=0){
        d=a%10;
        f=1;
        for(i=1;i<=d;i++){
            f=f*i;
        }
        s=s+f;
        a=a/10;
    }
    if(s==b)
    printf ("The number %d is a strong number",s);
    else
    printf ("The number %d is not a strong number",b);
}