/*Implementation of stack using linked list
author:jaikumar guwalani*/
#include<stdio.h>
struct node
{
 int data;
 struct node *next;
}*head=NULL;

push()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter the data:");
 scanf("%d",&temp->data);
 if(head==NULL)
 {
  head=temp;
  temp->next=NULL;
 }
 else
 {
  temp->next=head;
  head=temp;
 }
}

pop()
{
 if(head==NULL)
 {
   printf("Already empty stack");
 }
 else if(head->next==NULL)
 {
  head=NULL;
 }
 else
 {
     head=head->next;
 }
}

top_stack()
{
 printf("The top of stack is %d",head->data);
}

size_stack()
{
 int count=0;
 struct node *temp;
 temp=head;
 while(temp!=NULL)
 {
  count++;
  temp=temp->next;
 }
 printf("The size of stack is %d",count);
}

display()
{
 struct node *temp;
 temp=head;
 while(temp!=NULL)
 {
 printf("\n %d",temp->data);
 temp=temp->next;
 }
}

main()
{
 int choice;
 while(1)
 {
 printf("\n1.Push \n2.Pop \n3.Display \n4.Top  \n5.Size  \n6.Exit");
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
    exit(0);
  }
 }


}