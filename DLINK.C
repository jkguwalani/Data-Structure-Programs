/*Program to perform all operations on doubly linked list
 author:jaikumar guwalani */
#include<stdio.h>
struct node
{
 int data;
 struct node *prev;
 struct node *next;
}*head=NULL;

create()
{
 struct node *temp;
 struct node *traverse;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 if(head==NULL)
 {
  head=temp;
  temp->prev=NULL;
  temp->next=NULL;
 }
 else
 {
  traverse=head;
  while(traverse->next!=NULL)
  {
    traverse=traverse->next;
  }
  traverse->next=temp;
  temp->prev=traverse;
  temp->next=NULL;
 }
}
 display()
 {
   struct node *traverse;
   traverse=head;
   printf("NULL");
   while(traverse!=NULL)
   {
    printf("<--");
    printf("%d",traverse->data);
    printf("-->");
    traverse=traverse->next;
   }
   printf("NULL");
 }

insert_start()
{
 struct node *temp;
 struct node *traverse;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 if(head==NULL)
 {
  head=temp;
  temp->prev=NULL;
  temp->next=NULL;
 }
 else
 {
   head->prev=temp;
   temp->next=head;
   head=temp;
   temp->prev=NULL;
 }
}

insert_end()
{
 struct node *temp;
 struct node *traverse;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 if(head==NULL)
 {
  head=temp;
  temp->prev=NULL;
  temp->next=NULL;
 }
 else
 {
  traverse=head;
  while(traverse->next!=NULL)
  {
    traverse=traverse->next;
  }
  traverse->next=temp;
  temp->prev=traverse;
  temp->next=NULL;
 }
}

insert_between()
{
 int position,pos=0;
 struct node *temp;
 struct node *traverse;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 printf("Enter position");
 scanf("%d",&position);
 if(position==1)
 {
  if(head==NULL)
   {
	 head=temp;
	 temp->prev=NULL;
	 temp->next=NULL;
   }
  else
   {
       head->prev=temp;
	temp->next=head;
	head=temp;
	temp->prev=NULL;
   }
 }
 else
  {
    pos++;
    traverse=head;
    while(pos!=position-1  && traverse->next !=NULL)
    {
     traverse=traverse->next;
     pos++;
    }
     if(pos==position-1)
      {
	temp->next=traverse->next;
	traverse->next->prev=temp;
	traverse->next=temp;
	temp->prev=traverse;
      }
     else
      {
	printf("Wrong position");
      }
 }

}

delete_start()
{
 struct node *temp;
 temp=head;
 if(temp==NULL)
 {
   printf("LL is already empty ");
 }
 else if(temp->next==NULL)
 {
   head=NULL;
 }
 else
 {
   head=temp->next;
   temp->next->prev=NULL;
 }
}

delete_end()
{
 struct node *temp;
 temp=head;
 if(temp==NULL)
 {
   printf("LL is already empty ");
 }
 else if(temp->next==NULL)
 {
   head=NULL;
 }
 else
 {
  while(temp->next!=NULL)
  {
  temp=temp->next;
  }
  temp->prev->next=NULL;
 }
}

delete_between()
{
 int position,pos=0;
 struct node *temp;
 printf("Enter position");
 scanf("%d",&position);
 temp=head;
 if(position==1)
 {
  if(temp==NULL)
   {
      printf("LL already empty");
   }
  else if(temp->next==NULL)
   {
     head=NULL;
   }
  else
  {
    head=temp->next;
    temp->next->prev=NULL;
  }
 }
 else
  {
    pos++;
    while(pos!=position-1  && temp->next!=NULL)
    {
     temp=temp->next;
     pos++;
    }
     if(pos==position-1)
      {
	if(temp->next->next==NULL)
	{
	 temp->next=NULL;
	}
	else
	{
	temp->next=temp->next->next;
	temp->next->prev=temp;
	}
      }
     else
      {
	printf("Wrong position");
      }
 }
}

main()
{
 int choice;
 while(1)
 {
   printf("\n1.Create \n2.Display  \n3.Insert at start  \n4.Insert at end  \n5.Insert in between   \n6.Delete at start  \n7.Delete at end  \n8.Delete in between   \n9.Exit");
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
	insert_start();
	break;
      case 4:
	insert_end();
	break;
      case 5:
	 insert_between();
	 break;
      case 6:
	 delete_start();
	 break;
       case 7:
	 delete_end();
	 break;
       case 8:
	  delete_between();
	  break;
      case 9:
      exit(0);
      default:
       printf("Wrong choice");
       break;
   }
 }
}