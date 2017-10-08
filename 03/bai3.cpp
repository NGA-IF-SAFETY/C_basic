/*tinh tong */
#include<stdio.h>
#include <conio.h>
int main()
{
	int i=1,n,s1=0;
	float s2=0;
	printf ("nhap n : ");
	scanf ("%d",&n);
	if (n<0) 
	{ 
		printf ("moi ban nhap lai n, n phai lon hon 0 ");
		getch();
	}
	else 
	{
	
		for (i=1;i<=n;i++)
		{
			s1+=i;
			s2+=((float)1/i);
		}	
		printf("tong s1 = %d \ntong s2 =%.3f\n",s1,s2);
		//---
		int j=1, s3=0;
		float s4=0;
		while (j<=n)
		{
			s3+=j;
			s4+=((float)1/j);
			j++;
		}	
		printf("tong s3 = %d \ntong s4 =%.3f\n",s3,s4);
		//--- 
		int a=1,s5=0;
		float s6=0;
		do 
		{
			s5+=a;
			s6+=((float)1/a);
			a++;
		}
		while (a<=n);
		printf("tong s5 = %d \ntong s6 =%.3f\n",s5,s6);
	}
}
