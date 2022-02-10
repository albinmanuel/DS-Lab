#include<stdio.h>
void bsearch(int x[],int n,int y);
void bubblesort(int x[],int n);
void main()
{
  int a,i,m;
  printf("\nEnter the number of elements: ");
  scanf("%d",&a);
  int ar[a];
  printf("\nEnter the array: ");
  for(i=0;i<a;i++)
     scanf("%d",&ar[i]);
    bubblesort(ar,a);
  printf("\nEnter the value to search: "); 
  scanf("%d",&m); 
  bsearch(ar,a,m);
}
void bsearch(int x[],int n,int y)
{    
    int top=0,bot=n-1,mid,z=1;
    while((top<=bot)||(z=1))
    {
      mid=(top+bot)/2;
      if(x[mid]==y)
      {
        printf("\nThe value %d is found in array position %d\n",y,mid);
        z=1;
        break;
      }
      else if (y<x[mid])
      bot=mid-1;
      else
      top=mid+1;  
    }
    if(z=0)
    printf("\nNot fouund!\n");
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
