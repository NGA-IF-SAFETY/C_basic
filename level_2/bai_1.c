/*kiem tra mot so cos phai so ban nguyen khong*/

#include<stdio.h>
void main()
{
	float n ;
	int i;
	printf("nhap vao so nguyen i = ");
	scanf("%d",&i);
	n=i+0.5;
	if (i>0||i==0)	
		printf("%.3f la so ban nguyen \n",n);
	else
		if(i<0)
			printf ("%.3f khong la so ban nguyen",n);
	getch();
}
