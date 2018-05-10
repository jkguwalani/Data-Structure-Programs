/*Program to get minimum element from stack in O(1) and using less space 
author:Jaikumar Guwalani */
#include<stdio.h>
#define size 10
int stack[size],top=-1;
int minstack[size],top2=-1;
push()
{
 int data;
 printf("Enter data:");
 scanf("%d",&data);
 if(!isFull())
 {
   if(top2==-1)
   {
    top++;
    top2++;
    stack[top]=data;
    minstack[top2]=data;
   }
   else if(data>minstack[top2])
   {
     top++;
     stack[top]=data;
   }
   else
   {
    top++;
    top2++;
    stack[top]=data;
    minstack[top2]=data;
   }
 }
 else
 {
  printf("Stack Overflow");
 }
}
int getMinimum()
{
  int a=minstack[top2];
  printf("Minimum element in stack is:%d",a);
  return;
}
pop()
{
 if(!isEmpty())
 {
  if(stack[top]==minstack[top2])
  {
   top--;
   top2--;
  }
  else
  {
  top--;
  }
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

int isEmpty()
{
 if(top==-1)
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

display()
{
 int i;
 for(i=top;i>-1;i--)
 {
  printf("%d",stack[i]);
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
 clrscr();
 while(1)
 {
 printf("\n1.Push \n2.Pop \n3.Display \n4.Top  \n5.Size \n6.Minimum \n7.Exit");
 scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    push();
    break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
    case 4:
    top_stack();
    break;
    case 5:
    size_stack();
    break;
    case 6:
    getMinimum();
    break;
    case 7:
    exit(0);
  }
 }
}