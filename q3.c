#include<stdlib.h>
#include<stdio.h>

int main()
{
	int ar[100];
	int n;
	int sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:");
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("\nThe elements are:");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",ar[i]);
		sum+=ar[i];
	}

	return 0;
}