#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};
struct node *head=NULL;
struct node *new,*ptr;

struct node *createnode(int item)
{
   new=(struct node *)malloc(sizeof(struct node));
   new->data=item;
   new->next=NULL;
}

void display()
{
 
  ptr=head;
  while(ptr!=NULL)
  {
    printf("%d ",ptr->data);
    ptr=ptr->next;
  }
}

void Insert_first(int item)
{
   
   new=createnode(item);
   if(head==NULL)
      head=new;
   else
   {
      new->next=head;
      head=new;
   }
}

void Insert_last(int item)
{
  new=createnode(item);
  ptr=head;
  while(ptr->next!=NULL)
  {
     ptr=ptr->next;
  }
  ptr->next=new;
}

void Insert_After(int after,int item)
{
   new=createnode(item);
   ptr=head;
   while(ptr->data!=after)
   {
      ptr=ptr->next;
   }
   new->next=ptr->next;
   ptr->next=new;
}

void Insert_Before(int before,int item)
{
   new=createnode(item);
   ptr=head;
   struct node *pptr;
   int flag=0;
   while(ptr->data!=before)
   {
      pptr=ptr;
      ptr=ptr->next;
      flag=1;
   }
   if(flag==1)
   {
     new->next=ptr;
     pptr->next=new;
   }
   else
   {
     new->next=head;
     head=new;
   }
}
     

int main()
{
   int item,i,ch,after,before;
   printf("Press 1 for Insert First\nPress 2 for Insert last\nPress 3 for Insert after\nPress 4 for Insert Before\nPress 5 for Display\nPress 6 for Exit.\n");
 
   while(1)
   {
     printf("Enter your choice: ");
     scanf("%d",&ch);
     
     switch(ch)
     {
       case 1:
            printf("Enter the item: ");
            scanf("%d",&item);
            Insert_first(item);
            break;
      case 2:
            printf("Enter the item:");
            scanf("%d",&item);
            Insert_last(item);
            break;
      case 3:
            printf("Enter the after element: ");
            scanf("%d",&after);
            printf("Enter the item: ");
            scanf("%d",&item);
            Insert_After(after,item);
            break;
      case 4:
            printf("Enter the before element:");
            scanf("%d",&before);
            printf("Enter the item: ");
            scanf("%d",&item);
            Insert_Before(before,item);
            break;
      case 5:
            printf("Present condition of list:");
            display();
            break;
      case 6:
            printf("Exit");
            return -1;
      default:
             printf("INVALID CHOICE");
   
    }
  }
  return 0;      
         
}
