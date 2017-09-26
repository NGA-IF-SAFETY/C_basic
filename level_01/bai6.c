#include<stdio.h>
void main()
{
	int n,dv,chuc,tram;
	printf("nhap vao so nguyen 3 chu so n= ");
	scanf("%d",&n);
	dv=n%10;
	n=n/10;
	chuc=(n%10);
	tram=n/10;
	printf("so dao nguoc la:%d%d%d",dv,chuc,tram);
}
