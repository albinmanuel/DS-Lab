#include<stdio.h>
void simplemerge(int A[],int f,int s,int t);
void msort(int e[],int beg,int end);
void print(int x[],int p);
void main()
{
  int i,n;
  printf("\nEnter the number of elements: ");
  scanf("%d",&n);
  int a[n];
  printf("\nEnter the elements: ");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  msort(a,0,n-1);
  print(a,n);
}
void msort(int e[],int beg,int end)
{
  int mid;
  if(beg<end)
  {
   mid=(beg+end)/2;
   msort(e,beg,mid);
   msort(e,mid+1,end);
   simplemerge(e,beg,mid+1,end);
  }
}
void simplemerge(int A[],int f,int s,int t)
{
  int temp[100],i=f,j=s,k=0;
  while(i<s&&j<=t)
  {
   if(A[i]<A[j])
     temp[k++]=A[i++];
   else
     temp[k++]=A[j++];
  }
  while(i<s)
  {
    temp[k++]=A[i++];
  }
  while(j<=t)
  {
    temp[k++]=A[j++];
  }
  for(i=f,j=0;j<k;)
   A[i++]=temp[j++];
}
void print(int x[],int p)
{
  int i;
  printf("\nSorted array is : ");
  for(i=0;i<p;i++)
    printf("\n%d",x[i]);
}
