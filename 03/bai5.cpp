#include<stdio.h>
#include <conio.h>
int main ()
{
	float n,s;
	while(n>0)
	{ 
		printf("nhap gia tri : \t ");
		printf("\n");
		scanf("%f",&n);
		s=s+n;
		printf ("\n tong = %.3f",s);
	}
	//-----------------------------------------------------------------
	float n1,s1;

	do  {
			printf("\n nhap gia tri : ");
			scanf("%f",&n1);
			if (n1>0)
	
				s1=s1+n1;
				printf ("\n tong= %.3f",s1);
		}
	while(n1>0);

	//----------------------------------------------------- 
	int i;
	float n2,s2;
	for (i=1;;i++)
	{
		printf("\n nhap gia tri : ");
		scanf("%f",&n2);
		if (n2>0)
	{
			s2=s2+n2;
		 	printf ("\n tong= %.3f",s2);
	}
		else 
		{
			printf("moi ban nhap lai,gia tri phai lon hon 0");
			break;
		}
}
}
