#include<iostream>
using namespace std;

struct Node 
{
	string data; 
	struct Node *next;

};
Node* head = NULL;

Node* InsertAtFirst( string x)
{
	struct Node* temp = new Node;
	temp -> data = x;
	temp -> next = NULL;
	if(head != NULL)
	temp -> next = head;
	head = temp;
	return head;
}
