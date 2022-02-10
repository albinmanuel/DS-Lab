#include<stdio.h>
void lsearch(int x[],int n,int y);
void main()
{
  int a,i,m;
  printf("\nEnter the number of elements: ");
  scanf("%d",&a);
  int ar[a];
  printf("\nEnter the elements: ");
  for(i=0;i<a;i++)
     scanf("%d",&ar[i]);
  printf("\nEnter the value to search: "); 
  scanf("%d",&m); 
  lsearch(ar,a,m);
}
void lsearch(int x[],int n,int y)
{
   int i,z=0,pos;
   for(i=0;i<n;i++)
   {
     if(x[i]==y)
       {
         z++;
         pos=i;
       }
   }
   if(z>0)
   printf("\nThe value %d is found in array position %d\n",y,pos);
   else
   printf("\nNot fouund!\n");
}
