/* Menu Driven Program to perform all operations on Linked List
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
}

insert_start()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
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

insert_end()
{
 struct node *traverse;
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 traverse=head;
  if(traverse==NULL)
 {
 head=temp;
 temp->next=NULL;
 }
 else
 {
 while(traverse->next!=NULL)
 {
   traverse=traverse->next;
 }
 traverse->next=temp;
 temp->next=NULL;
 }
}

insert_between()
{
 int position;
 int pos=0;
 struct node *traverse;
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 printf("Enter the position at which you want to enter:");
 scanf("%d",&position);
 if(position==1)
 {
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
	traverse->next=temp;
      }
     else
      {
	printf("Wrong position");
      }
 }
}
	   /*	for(i=0,ptr=head;i<pos;i++)
		{
			ptr=ptr->next;
			if(ptr==NULL)
			{
				printf("\nPosition not found:[Handle with care]\n");
				return;
			}
		}
		temp->next =ptr->next ;
		ptr->next=temp;
	}

 /*traverse=head;
 if(traverse==NULL)
 {
  head=temp;
  temp->next=NULL;
 }
 else if(position==1)
 {
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
 else
 {
   while(traverse->next!=NULL)
   {
     traverse=traverse->next;
     pos=position;
     if(pos==position)
     {
       temp->next=traverse->next;
       traverse->next=temp;
     }
     else
     {
       printf("Wrong position ");
     }
   }
 } */
delete_start()
{
  struct node *p;
  p=head;
  if(p==NULL)
  {
    printf("Linked list is already empty first put some elements to delete");
  }
  else if(p->next==NULL)
  {
    head=NULL;
  }
  else
  {
   head=head->next;
  }
}

delete_end()
{
 struct node *p;
  p=head;
  if(p==NULL)
  {
    printf("Linked list is already empty first put some elements to delete");
  }
  else if(p->next==NULL)
  {
    head=NULL;
  }
  else
  {
    while(p->next->next!=NULL)
    {
      p=p->next;
    }
   p->next=NULL;
  }
}

delete_between()
{
 int position;
 int pos=0;
 struct node *traverse;
 printf("Enter the position at which you want to enter:");
 scanf("%d",&position);
 traverse=head;
 if(position==1)
 {
  if(traverse==NULL)
   {
     printf("Linked List is already empty put some elements to delete ");
   }
  else if(traverse->next==NULL)
   {
     head=NULL;
   }
  else
   {
     head=head->next;
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
	traverse->next=traverse->next->next;
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