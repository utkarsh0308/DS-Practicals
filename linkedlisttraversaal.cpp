#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main(){
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	head -> data = 3;
	head -> next = second;	
	
	second -> data = 33;
	second -> next = third;

    third -> data = 49;
	third -> next = NULL;
	
	printList(head);

	return 0;
}

