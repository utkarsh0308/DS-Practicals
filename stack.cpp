#include<iostream>
#include<conio.h>
using namespace std;

int top, stack[10];

void initialize()
{
	top=-1;
}

void underflow()
{
	if(top==-1)
	cout<<"stack is empty";
	else
	cout<<"stack is not empty";
}

void overflow()
{
	if(top==max-1)
	cout<<"stack is full";
	else
	cout<<"stack is not full";
}

void push()
{
	if(top==max-1)
	cout<<"stack is full\n";
	else
	{
		top++;
		cout<<"Insert new element in stack";
		cin>>stack[top];
	}
}

void dispaly
{
	if(top==-1)
	cout<<"stack is empty";
	else{
		cout
	}
}


