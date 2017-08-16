#include<stdio.h>
#include<stdlib.h>

int pow(int i,int n)
{
  int power=1;
  for(int j=1;j<=n;j++)
  power*=i;

  return power;
}

int sum(int ar[100],int n)
{
  int s=0;
  for(int i=0;i<n;i++)
  s+=ar[i];

  return s;
}


void display(int ar[100],int n)
{
  for(int i=0;i<n;i++)
  printf("%d ",ar[i]);

  printf("\n");

}



int main()
{
int ar[100];
int n;
printf("How many numbers do you want to enter?");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
int pss=pow(2,n);
printf("%d",pss);
int set_sum=sum(ar,n);
if(set_sum%2!=0)
printf("\n Partition is not possible");
else
{
printf("\n The array you have entered is:");
display(ar,n);
int part_sum=set_sum/2;
int i=0;
int **pow_set= (int **)malloc(pss*sizeof(int *));
   for (i=0; i<pss; i++)
        pow_set[i] = (int *)malloc(n*sizeof(int));
for(int j=0;j<pss;j++)
{
  for(int k=0;k<n;k++)
  {
    if(j&(1<<k))
    {
    pow_set[j][k]=ar[k];
    //printf("%d ",pow_set[j][k]);
    }
  }

  //printf("\n");
  //printf("%d ",sum(pow_set[j],n));
  if(sum(pow_set[pss-j-1],n)==part_sum)
  {
    display(pow_set[j],n);
    display(pow_set[pss-j-1],n);
  }

}

printf("\n The power set was:");
for(int i=0;i<pss;i++)
{
  for(int j=0;j<n;j++)
  printf("%d ",pow_set[i][j]);

  printf("\n");
}
}


return 0;
}
