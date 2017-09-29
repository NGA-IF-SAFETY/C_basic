/*giai pt trung  phuong tong quat*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delta,t1,t2,x1,x2,x3,x4,t;
	printf("nhap he so a =\t");
		scanf("%f",&a);
	printf("nhap he so b =\t");
		scanf("%f",&b);
	printf("nhap he so c =\t");
		scanf("%f",&c);
	if (a==0)
	{
		if(b!=0)
		{
			printf("phuong trinh co nghiem la:t= %.3f\n ",float (-c/b));
			printf(" phuong trinh da cho co 2 nghiem x1= %.3f \n  x2=%.3f",sqrt (t),-sqrt(t));
		}
		else 	
		{
			if(c==0)
			{
				printf("phuong trinh vo so nghiem \n");
				printf("phuong trinh bd vo so nghiem \n" );
			}
			else printf("phuong trinh vo nghiem \n");	
			
		}
	}
	else 
	{
		delta=b*b-4*a*c;
		if (delta<0)	
			printf("phuong trinh vo nghiem");
		
		else 
		{
			 if (delta==0)	
			 {
			 	printf("phuong trinh co nghiem kep t1=t2=%.3f",float (-b/2*a));
			 	if (t1<0)
			 		printf("\n phuong trinh ban dau vo nghiem \n");
			 	else
			 {
			 	if(t1>0) 	
				 	printf("\n phuong trinh da cho co 2 nghiem x1=%.3f \t x2=%.3f",sqrt(t1),-sqrt(t1));
				else 
					printf( "\n phuong trinh da cho co nghiem x =%.3f",t1);
						
				 }	
			}
			 else 
			 	{
				 	t1=(-b+sqrt(delta))/2*a;
			 		t2=(-b-sqrt(delta))/2*a;
			 		printf("\n phuong trinh co hai nghiem phan biet \n x1= %.3f \n x2=%.3f",t1,t2);
			 		if (t1<0 && t2<0)
				 	printf("phuong trinh da cho ban dau vo nghiem \n");
			 		else 
					 {
					 	if (t1<0 && t2>0)
					 		printf ("\n phuong trinh da cho co 2 nghiem x1=%.3f \t x2= %.3f",sqrt (t2),-sqrt (t2));
					 	else 
					 	{
					 		if(t1>0 && t2>0)
					 		printf("\n phuong trinh co 4 nghiem pb x1=%.3f,x2=%.3f,x3=%.3f,x4=%.3f",sqrt(t1),-sqrt(t1),sqrt(t2),-sqrt(t2));
					 		if (t1>0 && t2<0)
					 		printf ("\n phuong trinh da cho co 2 nghiem x1=%.3f \t x2= %.3f",sqrt(t1),-sqrt(t1));
					 		if (t1==0)
					 		{
					 			if (t2<0) printf ("phuong trinh da cho co nghiem x= %.3f \n",t1);
					 			else 
					 				printf("phuong trinh bd co nghiem x1=%.3f \t x2=%.3f \t x3=%.3f \n",t1,sqrt(t2),-sqrt(t2));
					 				
							 }
					 		if (t2==0)
					 		{
					 			if (t1<0) printf ("phuong trinh da cho co nghiem x= %.3f \n",t2);
					 			else 
					 				printf("phuong trinh bd co nghiem x1=%.3f \t x2=%.3f \t x3=%.3f \n",t2,sqrt(t1),-sqrt(t1));
					 				
							 }
						 }
					 }
			 	}
			}
			
	}
		
}
