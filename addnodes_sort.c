#include<stdio.h>
#include<stdlib.h>
struct node
{
int rollno;
struct node *link;
};
struct node* addsort(struct node*);
void print(struct node*);
int main()
{
struct node *head=NULL;
int choice;
while(1)
{
printf("1.addsort 2.print 3.exit\n");
printf("enter ur choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:head=addsort(head);
       break;
case 2:print(head);
        break;
case 3:exit(0);
        default :printf("invalid choice\n");
        }
        }
        }
struct node* addsort(struct node *ptr)
        {
        struct node *newnode=NULL,*prev=NULL,*cur=NULL;
        newnode=(struct node*)calloc(1,sizeof(struct node));
        if(newnode==NULL)
        printf("node not created\n");
        else
        {
        printf("enter roll no\n");
        scanf("%d",&newnode->rollno);
        if((ptr==NULL)||newnode->rollno < ptr->rollno)
        {
        newnode->link=ptr;
        ptr=newnode;
        }
        else
        {
        prev=ptr;
        cur=ptr->link;
        while(cur&&newnode->rollno>cur->rollno)
        {
        prev=cur;
        cur=cur->link;
        }
        newnode->link=prev->link;
        prev->link=newnode;
        }
        }
        return ptr;
        } 
 void print(struct node *ptr)
        {
        struct node *temp=NULL;
        temp=ptr;
        if(ptr==NULL)
        printf("sll is empty\n");
        else
        {
        while(temp)
        {
        printf("%d\n",temp->rollno);
        temp=temp->link;
        }
        }
        }
        
