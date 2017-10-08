#include<stdio.h>
int main()
{
	int n,i;
	printf ("\nnhap n: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		if (i%2==0) printf ("%d\t",i);
	}
	//-------------------------------
	int n1,j=0;
	printf ("\nnhap n : ");
	scanf ("%d",&n1);
	while(j<=n1)
	{
		if (j%2==0)
			printf ("%d\t",j);
		j++;
	}
//---------------------------------------------
	int n2,m=0;
	printf ("\nnhap n: ");
	scanf("%d",&n2);
	do  
		{
			if(m%2==0)
				printf("%d\t",m);
			m++;
		}
	while (m<n2);
	printf("%d\t",m);
	
}

