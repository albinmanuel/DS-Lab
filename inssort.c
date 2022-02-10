#include<stdio.h>
void isort(int x[],int n);
void main()
{
  int a,i;
  printf("\nEnter the number of elements: ");
  scanf("%d",&a);
  int ar[a];
  printf("\nEnter the elements: ");
  for(i=0;i<a;i++)
     scanf("%d",&ar[i]);
  isort(ar,a);
}
void isort(int x[],int n)
{
  int i,key,j,k;
  for(i=1;i<n;i++)
  {
    key=x[i];
    for(j=i-1;(j>=0)&&x[j]>key;j--)
    {
       x[j+1]=x[j];
    }   
    x[j+1]=key;
  }
  printf("\nSorted array is:\n");
  for(k=0;k<n;k++)
  {
    printf("%d",x[k]);
    printf("\n");
  }
}  
