#include<stdio.h>
void ssort(int x[],int n);
void main()
{
  int a,i;
  printf("\nEnter the number of elements: ");
  scanf("%d",&a);
  int ar[a];  
  printf("\nEnter the elements: ");
  for(i=0;i<a;i++)
     scanf("%d",&ar[i]);
  ssort(ar,a);
}
void ssort(int x[],int n)
{
   int i,j,temp,k;
   for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(x[i]>x[j])
       {
         temp=x[i];
         x[i]=x[j];
         x[j]=temp;
       }
     }
   }
 printf("\nSorted array is:\n");
 for(k=0;k<n;k++)
  printf("%d\n",x[k]);
}
