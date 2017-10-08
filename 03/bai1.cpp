/*tinh tich cac so tu 1-n*/
#include<stdio.h>
int main ()
{
	int n,s=1,i;
	printf("nhap so n ");
	 scanf ("%d",&n);
	for (i=1;i<=n;i++)
	s*=i;
	printf("\n tich tu 1 den n= %d",s);
//--------
 	int a=1,d=1;
	while (a<=n)
	{ 
		d=d*a;
		a++;
	}
	printf("\n tich tu 1 den n= %d",d);

//-----
	int b=1,c=1;
	do 
		{	
			c=c*b;
			b++;	
		}
	while (b<=n);
	printf("\n tich tu 1 ddn n= %d",c);
}
