#include<stdio.h>
#include<stdlib.h>
struct node
{
int rollno;
struct node *link;
};
struct node* addlast(struct node*);
struct node* delspecific(struct node*);
void print(struct node*);
int main()
{
struct node *head=NULL;
int choice;
while(1)
{
printf("1.addlast 4. delspecific 2.print 3.exit\n");
printf("enter ur choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:head=addlast(head);
       break;
case 4:head=delspecific(head);
       break;     
case 2:print(head);
        break;
case 3:exit(0);
        default :printf("invalid choice\n");
        }
        }
        }
struct node* addlast(struct node *ptr)
        {
        struct node *newnode=NULL,*temp=NULL;
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
        temp=ptr;
        while(temp->link)
        temp=temp->link;
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
 struct node* delspecific(struct node *ptr)
        {
        struct node *temp=NULL,*prev=NULL;
        int data;
        printf("enter node to del\n");
        scanf("%d",&data);
        if(ptr==NULL){
        
        printf("node not created\n");
        
        }
        else if(data==ptr->rollno)
        {
        temp=ptr;
        ptr=ptr->link;
        free(temp);
        temp=NULL;
        }
        else 
        {
        prev=ptr;
        temp=ptr->link;
        while(temp&&data!=temp->rollno)
        {
        prev=temp;
        temp=temp->link;
        }
        if(temp==NULL)
        {
        printf("%d not found\n",data);
        
}
else
        prev->link=temp->link;
        free(temp);
        temp=NULL;
        }
        
        
        return ptr;
        }
        
        
