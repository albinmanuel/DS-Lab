#include<stdlib.h>
#include<stdio.h>
#define size 50
int isfull();
int isempty();
int peek();

int s[size],top=0;
void push(int item)
 {
   if(isfull())
    {
      printf("Stack is full");
    }
   else
    {
      s[top]=item;
      top=top+1;
    }
  }

int  pop()
  {
   int index=-1;
   if(isempty())
    {
      printf("Stack is empty");
    }
   else
    {
      top=top-1;
      index=top;
    }
    return index;
  }

int peek()
  {
   int index=-1;
    if(isempty())
      printf("Stack is empty");
    else 
      index=top-1;
    return index;
  }

int isempty()
  {
   if(top==0)
    return 1;
   else
    return 0;
  }
int isfull()
  {
    if(top==size)
     return 1;
    else 
     return 0;
  }
void display()
  {
   int i;
   printf("\n The stack is: ");
    for(i=top-1;i>=0;i--)
     printf("%d ",s[i]);
   }
void main()
   {
    int ch;
     printf("Stack using an array");
    do
      {
        printf("\n\n Operations are\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n Select the option:");
   scanf("%d",&ch);
   switch(ch)
    {
      case 1:{
              int item;
              printf("Input the item to be pushed into the stack: ");
              scanf("%d",&item);
              push(item);
              break;
             }
      case 2:{
             int val=pop();
             if(val!=-1)
                 printf("The deleted item is %d \n",s[val]);
             break;
            }
      case 3:{
             int p=peek();
             if(p!=-1)
                printf("The item at the top is %d \n",s[p]);
             break;
            }
      case 4:display();
            break;

      case 5:exit(0);
      default:printf("Wrong option\n");
              break;
     }
       }
         while(1);
    }
