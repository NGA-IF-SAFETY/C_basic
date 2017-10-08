#include<stdio.h>
#include <math.h>
int main()
{
	int n,m,i;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("\nnap m : ");
	scanf("%d",&m);
	while(n<m && i>n &&i<m)
	{
			if (i%2!=0)
		i++;
		printf ("%d\t",i);
	}
}
