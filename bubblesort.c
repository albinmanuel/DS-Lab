#include<stdio.h>
void bubblesort(int x[],int n);
void main()
{
  int a,i;
  printf("\nEnter the number of elements: ");
  scanf("%d",&a);
  int ar[a];  
printf("\nEnter the elements: ");
  for(i=0;i<a;i++)
     scanf("%d",&ar[i]);
  bubblesort(ar,a);
}
void bubblesort(int x[],int n)
{
  int i,j,swap,k;
  for(i=0;i<n-1;i++)
  { 
     for(j=0;j<n-i;j++)
     {
        if(x[j]>x[j+1])
        {
          swap=x[j];
          x[j]=x[j+1];
          x[j+1]=swap;
        }
     }
  }
  printf("\nSorted array is:\n");
  for(k=0;k<n;k++)
  {
    printf("%d",x[k]);
    printf("\n");
  }
}
