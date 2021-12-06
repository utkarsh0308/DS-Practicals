#include<iostream>

struct node
{
int data;
struct node*next;
}
*start, *last, *temp;
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
cout<<"\n enter 4 for Display";
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
display();
break;
default:
cout<<"\n Your choice is invalid";
}
}
while(n<5);
getch();
}
