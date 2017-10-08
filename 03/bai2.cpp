/* in ra so le tu 8-46*/
 
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=7,j=0;

while (i<45)
{
	if (i%2!=0) j++;
	i+=2;
	printf ("%d \t",i);
}
	printf("\n %d so le ",j);
	printf("\n");
	
	//----------------------
	int a=9,b=0;
	
	for(a=9;a<=46;a+=2)
{
	if (a%2!=0)
	 b++;
}
	printf ("\n %d so le \n ",b);
	for(a=9;a<=46;a+=2)
	{
		if (a%2!=0) 
		printf("%d\t",a);
	}
	printf ("\n");
	
	

//----------------------------
int c=7,d=0;
printf ("\n");
do 
{ 
	if	(c%2!=0) d++;
	c+=2;
	printf (" %d \t",c);
	
}
while (c<45);
printf ("\n");
	printf("%d so le \n",d);
	getch();	
}


