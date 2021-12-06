#include<iostream>
#define max 8
using namespace std;
int front=0,rear=-1,i;
int q[max];
void initialize()
{
cout<<"Queue is initialized"<<endl;
}
void underflow()
{
if(rear==-1)
{
cout<<"Queue is empty"<<endl;
}
else
{
cout<<"Queue is not empty"<<endl;
}
}
void overflow()
{
if(rear==max-1)
{
cout<<"Queue is full"<<endl;
}
else
{
cout<<"Queue is not full"<<endl;
}
}
void insertion()
{
if(rear==max-1)
{
cout<<"Queue is full"<<endl;
}
else
{
rear++;
cout<<"Insert new element in Queue"<<endl;
cin>>q[rear];
}
}
void deletion()
{
if(rear==-1)
{
cout<<"Queue is empty"<<endl;
}
else
{
cout<<"Deleted element is "<<q[front]<<endl;
for(i=0;i<=rear;i++)
{
q[i]=q[i+1];
}
rear--;
}
}
void display()
{
if(rear==-1)
{
cout<<"Queue is empty"<<endl;
}
else
{
cout<<"Element of Queue is:- "<<endl;
for(i=front;i<=rear;i++)
{
cout<<q[i]<<" ";
}
}
}
int main()
{
int a;
do
{
cout<<"Enter 1 for initialize"<<endl;
cout<<"Enter 2 for underflow"<<endl;
cout<<"Enter 3 for overflow"<<endl;
cout<<"Enter 4 for insertion"<<endl;
cout<<"Enter 5 for Deletion"<<endl;
cout<<"Enter 6 for display"<<endl;
cout<<"Enter your choice:-"<<endl;
cin>>a;
switch(a)
{
case 1:
initialize();
break;
case 2:
underflow();
break;
case 3:
overflow();
break;
case 4:
insertion();
break;
case 5:
deletion();
break;
case 6:
display();
break;
default:
cout<<"invalid choice"<<endl;
}
}
while(a<7);
}
