#include<stdio.h>
#include<stdlib.h>
struct node
{
int rollno;
struct node *link;
};
struct node* addmiddle(struct node*);
void print(struct node*);
int main()
{
struct node *head=NULL;
int choice;
while(1)
{
printf("1.addmiddle 2.print 3.exit\n");
printf("enter ur choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:head=addmiddle(head);
       break;
case 2:print(head);
        break;
case 3:exit(0);
        default :printf("invalid choice\n");
        }
        }
        }
struct node* addmiddle(struct node *ptr)
        {
        struct node *newnode=NULL,*temp=NULL;
        int len=0,count=0;
        newnode=(struct node*)calloc(1,sizeof(struct node));
        if(newnode==NULL)
        printf("node not created\n");
        else
        {
        printf("enter roll no\n");
        scanf("%d",&newnode->rollno);
        if(ptr==NULL)
        ptr=newnode;
        else
        {
        
        for(temp=ptr;temp;temp=temp->link)
        len++;
        count=((len%2)==0)?(len/2):(len+1)/2;
        for(temp=ptr,len=1;len<count;len++)
        temp=temp->link;
        newnode->link=temp->link;
        temp->link=newnode;
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
        
