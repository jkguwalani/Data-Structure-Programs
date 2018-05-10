/*Program to implement 2 stacks operations in a single array
author:Jaikumar Guwalani */
#include<stdio.h>
#define size 10
int stack[size],top=-1,top2=size;
push_1()
{
 int data;
 printf("Enter data:");
 scanf("%d",&data);
 if(!isFull())
 {
  top++;
  stack[top]=data;
 }
 else
 {
  printf("Stack Overflow");
 }
}
push_2()
{
 int data;
 printf("Enter data:");
 scanf("%d",&data);
 if(!isFull2())
 {
  top2--;
  stack[top2]=data;
 }
 else
 {
  printf("Stack Overflow");
 }
}

pop_1()
{
 if(!isEmpty())
 {
   top--;
 }
 else
 {
  printf("Stack Overflow");
  }
}
pop_2()
{
 if(!isEmpty2())
 {
   top2++;
 }
 else
 {
  printf("Stack Overflow");
  }
}

int isFull()
{
  if(top==size-1)
  return 1;
  else
  return 0;
}
int isFull2()
{
  if(top==top-1)
  return 1;
  else
  return 0;
}

int isEmpty()
{
 if(top==-1)
 return 1;
 else
 return 0;
}
int isEmpty2()
{
 if(top2==size)
 return 1;
 else
 return 0;
}

top_stack()
{
int x;
if(!isEmpty())
{
 x=stack[top];
 printf("The top of stack is:");
 printf("%d",x);
}
else
{
  printf("Stack is empty");
}
}

display_1()
{
 int i;
 for(i=top;i>-1;i--)
 {
  printf("%d",stack[i]);
 }
}
display_2()
{
 int k;
 for(k=top2;k<size;k++)
 {
  printf("%d",stack[k]);
 }
}

size_stack()
{
 int i,count=0;
 for(i=top;i>-1;i--)
 {
  count++;
 }
 printf("The size of stack is %d",count);
}
main()
{
 int choice;
 while(1)
 {
 printf("\n1.Push into 1 \n2.Pop from 1 \n3.Display 1 \n4.Push into 2 \n5.Pop from 2 \n6.Display 2 \n7.Exit");
 scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    push_1();
    break;
    case 2:
    pop_1();
    break;
    case 3:
    display_1();
    break;
    case 4:
    push_2();
    break;
    case 5:
    pop_2();
    break;
    case 6:
    display_2();
    break;
    case 7:
    exit(0);
  }
 }
}