// Adjacency List
#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
};
class list {
	private :
		node *head, *tail;
	public :
	list()
	{
		head = tail = NULL;
	}
	void addnode(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		if(head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
	
	void display()
	{
		node *temp = new node;
		temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}	
		
};
