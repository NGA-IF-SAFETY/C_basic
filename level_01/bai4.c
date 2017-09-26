/*tinh chu vi dien tich tam giac */
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,C=0,p=0,s=0;
	printf("nhap do dai canh thu 1 : ");
	scanf("%f",&a);
	printf("nhap do dai canh thu 2: ");
	scanf("%f",&b);
	printf("nhap do dai canh thu 3 : ");
	scanf("%f",&c);
	printf("\n chu vi: C=%.3f",a+b+c);
	p=(a+b+c)/2;
	printf("\ndien tich: s=%.3f",sqrt((p-a)*(p-b)*(p-c)));
}
	

