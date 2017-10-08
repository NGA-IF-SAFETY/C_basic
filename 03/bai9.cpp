#include<stdio.h>
int main()
{
	int n,min;
	printf ("nhap day so :");
	scanf("%d",&n);
	min=n%10;
	while(n>0)
	{ 
		if(min>(n%10))
		min=(n%10);
		n=n/10;
	
	}
	printf ("\nmin= %d",min);
	//------------------------------------------
	int n1,m;
	printf("\nnhap day so : ");
	scanf("%d",&n1);
	m=n1%10;
	do 
	{	if(m>(n1%10))
		m=(n1%10);
		n1=n1/10;
	}
	while (n1>0);
	printf ("\nmin= %d",m);
	//-------------------------------------------------
	int a,b;
	printf ("\nnhap day so ");
	scanf ("%d",&a);
	b=a%10;
	for(;a>0;a=a/10)
	{ 
		if(b>(a%10))
		b=(a%10);
	}
	printf("\nmin= %d",b);
}
