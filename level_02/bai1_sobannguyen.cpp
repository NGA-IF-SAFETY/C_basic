/*kiem tra mot so cos phai so ban nguyen khong*/

#include<stdio.h>
void main()
{
	float i;
	printf("nhap vao mot so bat ki ");
	scanf("%f",&i);
	if ((i-0.5)==(int)i)
		printf("%.3f la so ban nguyen ",i);	
	else 
		printf ("%.3f khong la so ban nguyen",i);
		getch();
}
