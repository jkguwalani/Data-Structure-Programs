/* Program to delete n nodes after m nodes in Linked List
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

delete_mn()
{
 struct node *temp;
 struct node *traverse;
 struct node *temp2;
 struct node *curr;
 int m,n;
 int count=0,count1=0,count2=0;
 printf("Enter the value of m:");
 scanf("%d",&m);
 printf("Enter the value of n:");
 scanf("%d",&n);
 traverse=head;
 while(traverse!=NULL)
 {
  count++;
  traverse=traverse->next;
 }
 if(m+n<=count)
 {
 curr=head;
  while(curr)
  {
  count1=0;
  count2=0;
   temp=curr;
   while(count1<m-1)
   {
    count1++;
    temp=temp->next;
   }
   temp2=temp->next;
   while(count2<n)
   {
    count2++;
    temp2=temp2->next;
   }
   temp->next=temp2;
   curr=temp2;
   }
 }
 else
 {
   printf("you have entered incorrect values for m and n");
 }
return;
}

main()
{
 int choice;
 clrscr();
 while(1)
 {
   printf("\n1.Create \n2.Display  \n3.Delete n elements after m elements  \n4.Exit");
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
	delete_mn();
	break;
      case 4:
      exit(0);
      default:
       printf("Wrong choice");
       break;
   }
 }
}

