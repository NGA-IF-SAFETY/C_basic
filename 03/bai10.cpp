#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,k;
	printf ("\nnhap n: ");
	scanf ("%d",&n);
	while (n>0)
	{
		n=n/2;
		k++;
	}
	printf ("k = %d",k);
	//-----------------------------------------
  int a,b;
  printf("\nnhap n: ");
  scanf ("%d",&a);
  do 
  {
  	a=a/2;
  	b++;
  }
  while (a>0);
  printf("k= %d",b-1);
  //-------------------------------
  int m,d;
  printf("\nnhap n: ");
  scanf ("%d",&m);
  for (;m>0;m=m/2)
  	d++;
printf("k= %d",d);
}
