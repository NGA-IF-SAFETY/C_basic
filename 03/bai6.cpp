#include <stdio.h>
int main()
{
	int n,i,p=1;
	printf ("nhap n \t");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	p*=2*i;
	printf ("p= %d",p);
//---------------------------------
	int j=0,n1,p1=1;
	printf ("\nnhap gia tri n1= ");
	scanf ("%d",&n1);
	while (j<n1 && n1>0)
{
	j++;
	 p1*=(2*j);
}
	printf ("p = %d ",p1);
//------------------
int n3,p2=1,t=0;
printf ("\nnhap n3: ");
scanf ("%d",&n3);
do {
	t++;
	 p2*=(2*t);
	}
	while (t<n3 && n3>0);
	printf ("p = %d ",p2);

}
