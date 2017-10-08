/*tim so dao nguoc*/
#include <stdio.h>
int main ()
{
	int n, sodao=0,dvi;
	printf ("nhap n \t ");
	scanf ("%d",&n);
	while (n>0)
	{
		dvi=n%10;
		sodao=sodao*10+dvi;
		n=n/10;
	}	
	printf ("so dao la : %d",sodao);
	//---
	int j,sodaonguoc=0,m;
	printf ("\nnhap m \t");
	scanf("%d",&m);
	for (j=0;j<=(m+1);j++)
	{ 
	sodaonguoc=(sodaonguoc)*10+(m%10);
	m=m/10;
	}
	printf ("so dao la : %d",sodaonguoc);
	//---
	int a,daonguoc=0;
	printf("\nnhap a \t");
	scanf ("%d",&a);
	do 
	{
		daonguoc=daonguoc*10+(a%10);
		a=a/10;
	}
	while (a>0);
	printf ("\nso dao la : %d",daonguoc);	
}
