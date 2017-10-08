#include <stdio.h>
int main()
{
	float s=0,p=1,tbc=0,n;
	float i;
	printf ("nhap n: ");
	scanf ("%f",&n);
	if (n>0)
	{
		for(i=1;i<=n;i++)
		{ 
			s+=(float)i;
			p*=(float)i;
		}
		tbc=(float)s/n;
		printf ("\ntong s= %.3f",s);
		printf ("\ntich day so p= %.3f",p);
		printf ("\ntrung binh cong cua day so : %.3f",tbc);	
	}
	else 
		printf ("\nday so khong co phan tu nao ca");
		
	//-------------------------------------
	float s1=0,p1=1,n1,tb=0,j=1;
	printf ("\nnhap n1 :  ");
	scanf ("%f",&n1);
	if (n1>0) 
	{
		while (j<=n1)
		{
			s1+=j;
			p1*=j;
			j++;
		}
		tb=(float)s1/n1;
		printf ("\ntong s= %.3f",s1);
		printf ("\ntich day so p= %.3f",p1);
		printf ("\ntrung binh cong cua day so : %.3f",tb);	
		
	}
	else  	
		printf ("\nday so khong co phan tu nao");
	//-----------------
		
}

