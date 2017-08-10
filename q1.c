#include<stdio.h>
#include<stdlib.h>


void bubbleSort(int ar[100],int n)
{
	int opcount=0;
	FILE *fptr=fopen("bubblegraph.csv","a");
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			++opcount;
			if(ar[j]>ar[j+1])
			{
				int temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;

			}


		}
	}
	fprintf(fptr,"%d,%d \n",n,opcount);

}

void bubbleSortDescending(int ar[100],int n)
{
	int opcount=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			++opcount;
			if(ar[j]<ar[j+1])
			{
				int temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;

			}


		}
	}

}



int main()
{
	int ar[100];
	int n=5;
	for(int j=0;j<5;j++)
	{
		srand(0);
		for(int i=0;i<n;i++)
			ar[i]=rand();

		bubbleSortDescending(ar,n); //For worst case

		printf("\n You have entered the array:");
		for(int i=0;i<n;i++)
		printf("%d ",ar[i]);
		
		bubbleSort(ar,n);
		printf("\n\n The array in sorted order:");
		for(int i=0;i<n;i++)
		printf("%d ",ar[i]);

		n+=5;

	}
	


	return 0;
}