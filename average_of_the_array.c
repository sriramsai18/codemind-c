#include<stdio.h>
int main()
{
	int  n,i;
	scanf("%d",&n);
	float a[n],s=0.0,t;
	for(i=0;i<=n;i++)
    {
    	scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	    t=s/n;
	}
	printf("%.2f",t);
}