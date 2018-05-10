/*Implementation of queue using only one stack*/
#include<stdio.h>
#define SIZE 100
int stack[SIZE],top=-1;
void enqueue()
{
int data1;
 printf("Enter the element to enqueue");
 scanf("%d",&data1);
 if(isEmptyStack())
 push(data1);
 else
 enqueue1(data1);
}
int enqueue1(int data1)
{
int data;
 if(isEmptyStack())
   return;
 data=pop();
 enqueue1(data1);
 push_bottom(data,data1);
 return ;
}
int push_bottom(int data,int data1)
{
 if(isEmptyStack())
 {
 push(data1);
 push(data);
 }
 else
 {
 push(data);
 }
 return;
}
int isEmptyStack()
{
 if(top==-1)
  return 1;
 return 0;
}
int push(data)
{
 top++;
 stack[top]=data;
 return ;
}
void dequeue()
{
 int a;
 a=pop();

}
int pop()
{
int a=stack[top];
top--;
return a;
}
void print()
{
 int i;
 printf("Stack elements are:");
 for(i=top;i>-1;i--)
 {
  printf("\n%d",stack[i]);
 }
}
void main()
{
 int choice;
 clrscr();
 printf("----Queue implementation using only one stack---");
  while(1)
  {
   printf("\n1.Enqueue \n2.Dequeue \n3.Print \n4.Exit");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
	enqueue();
	break;
     case 2:
	dequeue();
	break;
     case 3:
	print();
	break;
     case 4:
	 exit(0);
     }
   }
  }