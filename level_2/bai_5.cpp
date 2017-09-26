#include<stdio.h>
#include<math.h>
int main()
{
	int chon;
	printf("\n nhap 1 de tinh cv dien tich hinh tam giac ,\n nhap 2 de tinh cv dien tich hinh chu nhat,\n nhap 3 de tinh cv dt hinh vuong ,\n nhap 4 de tinh cv dt hinh tron \n");
	scanf ("%d",&chon);
	if (chon==1)
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
	else
		{ 
			if (chon==2)
	
		{
				float a,b,cv,dt;
				printf("nhap do dai canh thu 1 : ");
				scanf("%f",&a);
				printf("nhap do dai canh thu 2: ");
				scanf("%f",&b);
				printf("\n chu vi hinh chu nhat cv = %.3f",(a+b)*2);
				printf("\n dien tich hinh chu nhat s= %.3f",a*b);
			
		}
			else
				if(chon==3)
		{
					float a,cv,dt;
					printf("nhap do dai canh  : ");
					scanf("%f",&a);
					printf("\n chu vi hinh vuong cv = %.3f",4*a);
					printf("\n dien tich hinh vuong s= %.3f",a*a);
		
		}
				else
					if(chon==4)
			{
						float R,cv,dt;
						float pi=3.14;
						printf("ban kinh hinh tron R= ");
						scanf("%f",&R);
						printf("\n chu vi hinh tron cv=%.3f",2*pi*R);
						printf("\n dien tich hinh tron dt= %.3f",R*R*pi);
			}
					else
						printf("ban nhap sai roi moi ban nhap lai");
			
	}
	
}
	
