#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50],i,n;
	printf("\n Enter Limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter Value %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Entered Values are as follows \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
