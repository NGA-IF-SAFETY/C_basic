/*giai pt bac hai tong quat*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delta,x1,x2;
	printf("nhap he so a =\t");
		scanf("%f",&a);
	printf("nhap he so b =\t");
		scanf("%f",&b);
	printf("nhap he so c =\t");
		scanf("%f",&c);
	if (a==0)
	{
		if(b!=0)
			printf("phuong trinh co nghiem la:x= %f",float (-c/b));
		else 	
		{
			if(c==0)	printf("phuong trinh vo so nghiem");
			else printf("phuong trinh vo nghiem ");	
		}
	}
	else 
	{
		delta=b*b-4*a*c;
		if (delta<0)	printf("phuong trinh vo nghiem");
		else 
		 	{
			 if (delta==0)	printf("phuong trinh co nghiem kep x1=x2=%f",float (-b/2*a));
			 else 
			 	x1=(-b+sqrt(delta))/2*a;
			 	x2=(-b-sqrt(delta))/2*a;
			 	printf("phuong trinh co hai nghiem phan biet \n x1= %.3f \n x2=%.3f",x1,x2);
			}
	}
		
}
