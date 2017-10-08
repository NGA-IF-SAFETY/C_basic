#include<stdio.h>
int main()
{ 	
	int dvi,n,a;
	printf("n= ");
	scanf ("%d",&n);
	a=n%10;
	printf ("\nso cuoi %d",a);
	while (n>0)
{		
		dvi=n%10;
		n=n/10;
}
	printf ("\nso dau %d",dvi);
//-------------------------------------------
int b,n1,t;
printf("\nn1= ");
	scanf ("%d",&n1);
	b=n1%10;
	printf ("\nso cuoi %d",b);
	do
{		t=n1%10;
		n1=n1/10;
}
while (n1>0);
	printf ("\nso dau %d",t);


	
}
