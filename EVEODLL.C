/* Program to rearrange a linked list such that all even and odd positioned nodes are together
  author:jaikumar guwalani*/
#include<stdio.h>
struct node
{
 int data;
 struct node *next;
}*head=NULL;
create()
{
 struct node *traverse;
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 if(head==NULL)
 {
  head=temp;
 }
 else
 {
  traverse=head;
  while(traverse->next!=NULL)
  {
   traverse=traverse->next;
  }
  traverse->next=temp;
 }
 temp->next=NULL;
return;
}

display()
{
struct node *temp;
temp=head;
while(temp!=NULL)
{
 printf("%d ---> ",temp->data);
 temp=temp->next;
}
printf("NULL");
return;
}

evenodd()
{
struct node *temp;
struct node *temp1;
struct node *head1=NULL;
struct node *temp2;
struct node *temp3;
struct node *traverse;
if(head==NULL)
{
 printf("Linked List is empty");
}
else if(head->next==NULL || head->next->next==NULL)
{
 head=head;
}
else
{
temp=head->next;
temp1=(struct node *)malloc(sizeof(struct node));
head1=temp1;
temp1->data=temp->data;
while(temp->next!=NULL && temp->next->next!=NULL)
{
 temp3=(struct node *)malloc(sizeof(struct node));
 temp=temp->next->next;
 temp1->next=temp3;
 temp3->data=temp->data;
 temp3->next=NULL;
 temp1=temp3;
}
temp=head;
while(temp!=NULL)
{
/*if(temp->next!=NULL && temp->next->next!=NULL)
{ */
temp2=temp->next->next;
temp->next=temp2;
temp=temp2;
//}
}
traverse=head;
while(traverse->next!=NULL)
{
traverse=traverse->next;
}
traverse->next=head1;
}
return;
}

main()
{
 int choice;
 clrscr();
 while(1)
 {
   printf("\n1.Create \n2.Display  \n3.Rearrange such that all even and odd elements are together  \n4.Exit");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	create();
	break;
      case 2:
	display();
	break;
      case 3:
	evenodd();
	break;
      case 4:
      exit(0);
      default:
       printf("Wrong choice");
       break;
   }
 }
}

