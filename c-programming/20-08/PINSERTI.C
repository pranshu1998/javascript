#include<stdio.h>
#include<conio.h>
void input(int a[],int n)
	{
		int i;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	}
void output(int a[],int n)
	{
	int i;
	for(i=0; i<n; i++)
	printf("%d",a[i]);
	}
void insertion(int a[],int n)
	{
	int j,i,key;
	for(j=1;j<n;j++)
	key=a[j];
	i=j-1;
	while(i>0 && a[i]>key)
		{
		 a[i+1]=a[i];
		 i=i-1;
		}

	    a[i+1]=key;
	}
void main()
	{
	int a[100],n;
	printf("enter the number of elements of array\n");
	scanf("%d",&n);
	input(a,n);insertion(a,n);
	printf("sorted elements are \n");
	output(a,n);
	}