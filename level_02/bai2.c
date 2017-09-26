/*kiem tra mot so co phai so chinh phuong khong */
#include<stdio.h>
#include<math.h>
void main()
{
	int n,i;
	printf("nhap vao so nguyen n =\t");
	scanf("%d",&n);
	if(n==0||n<0) 	
		printf("%d khong la so chinh phuong ",n);
	else
	{ 
		i=sqrt(n);
		if(n==i*i) 	
			printf("%d la so chinh phuong ",n);
		else 	
			printf("%d khong la so chinh phuong",n);
	}
}
