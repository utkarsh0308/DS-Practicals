#include<iostream>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}
*start, *last, *temp, *prev, *newnode;
void initialize()
{
start=NULL;
last=NULL;
cout<<"\n LINKED LIST IS INITIALIZED";
}
void underflow()
{
if (start==NULL)
cout<<"\n Linked List is empty";
else
cout<<"\n Linked List is not empty";
}
void insert()
{
temp=(struct node*)malloc(sizeof(struct node));
if (temp==NULL)
cout<<"\n Node not created";
else
{
int a;
cout<<"\n Enter DATA into the  Node";
cin>>a;
temp->data=a;
temp->next=NULL;
if(last!=NULL)
last->next=temp;
else
{
start=temp;
}
last=temp;
}
}
void deletion()
{
int x;
if(start==NULL)
cout<<"\n Linked list is empty";
else
{
prev=NULL;
temp=start;
cout<<"\n enter element you want to delete";
cin>>x;
while(temp!=NULL && temp->data!=x)
{
prev=temp;
temp=temp->next;
}
if(temp==NULL)
cout<<"\n Elemenet not found";
else
{
if (start==temp)
start=start->next;
else
{
prev->next=temp->next;
if(last==temp)
last=prev;
}
}
}
cout<<"\n Element is deleted";
free(temp);
}
void before()
{
int x, b;
if (start==NULL)
cout<<"\n Linked List is empty";
else
{
prev=NULL;
temp=start;
cout<<"\n Enter element before which you want to insert new element";
cin>>x;
while(temp!=NULL&&temp->data!=x)
{
prev=temp;
temp=temp->next;
}
if(temp==NULL)
{
cout<<"\n element not found";
}
else
{
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
cout<<"\n Node not allocated";
else
{
cout<<"\n Enter element you want to insert into new node";
cin>>b;
newnode->data=b;
newnode->next=temp;
}
}
if(prev!=NULL)
prev->next=newnode;
else
{
start=newnode;
}
cout<<"\n New node is linked/attached";
}
}
void after()
{
int x, b;
if (start==NULL)
cout<<"\n Linked List is empty";
else
{
temp=start;
cout<<"\n Enter element after which you want to insert new element";
cin>>x;
while(temp!=NULL&&temp->data!=x)
{
temp=temp->next;
}
if(temp==NULL)
{
cout<<"\n element not found";
}
else
{
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
cout<<"\n Node not allocated";
else
{
cout<<"\n Enter element you want to insert into new node";
cin>>b;
newnode->data=b;
newnode->next=temp->next;
temp->next=newnode;
}
}
if(temp==last)
{
last=newnode;
}
cout<<"\n New node is attached/linked.";
}
}
void display()
{
if (start==NULL)
cout<<"\n Linked list is empty";
else
{
temp=start;
cout<<"\n Elemenets of linked list are:";
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->next;
}
}
}
void main()
{
clrscr();
int n;
do
{
cout<<"\n enter 1 for Initialize";
cout<<"\n enter 2 for underflow";
cout<<"\n enter 3 for Insertion";
cout<<"\n enter 4 for deletion";
cout<<"\n enter 5 for insert before an element";
cout<<"\n enter 6 for insert before an element";
cout<<"\n enter 7 for Display";
cout<<"\n Enter Your Choice";
cin>>n;

switch(n)
{
case 1:
initialize();
break;
case 2:
underflow();
break;
case 3:
insert();
break;
case 4:
deletion();
break;
case 5:
before();
break;
case 6:
after();
break;
case 7:
display();
break;
default:
cout<<"\n Your choice is invalid";
}}
while(n<8);
getch();
}

