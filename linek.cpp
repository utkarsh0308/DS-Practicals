#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
}*start ,*temp, *last ;

void printList(Node* n){
	while(n!=NULL){
		cout<<"ELEMENT: "<<n->data<<"\n";
		n=n->next;
	}
}

void insert()
{
        temp = new Node();
        if (temp == NULL)
                cout << "\n Node not created";
        else
        {
                int a;
                cout << "\n Enter DATA into the  Node";
                cin >> a;
                temp->data = a;
                temp->next = NULL;
                if (last != NULL)
                        last->next = temp;
                else
                {
                        start = temp;
                }
                last = temp;
        }
}

int main(){
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	head->data=4;
	head->next=second;
	
	second->data=25;
	second->next=third;
	
	third->data=27;
	third->next=NULL;
	
	insert();
	printList(head);
	
}

