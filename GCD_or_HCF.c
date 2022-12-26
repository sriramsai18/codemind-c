#include<stdio.h>
int main()
{
	int a,s,i,g;
	scanf("%d%d",&a,&s);
	for(i=1;i<=a && i<=s;++i)
	{
		if(a%i==0 && s%i==0)
		g=i;
	}
	printf("%d",g);
}