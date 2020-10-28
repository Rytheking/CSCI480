#include "ryanslist.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void erase(struct Node* node)
{
	if(node==NULL)
	return;
	if(node->prev!=NULL)
	node->prev->next=node->next;
	if(node->next!=NULL)
	node->next->prev=node->prev;
}
void cleanList(struct Node* node)
{ 
		while (node != NULL)
		{
			if(node->data==0)
			{
				erase(node);
			}
			node = node->next;
		}
}
Node* subSortEdge(Node* a, Node* b)
{
	
	Node* result = NULL;
	if(a==NULL)
	{
		return b;
	}
	else if(b==NULL)
	{
		return a;
	}
	if (a->weight <= b->weight)
	{

		result =a;
		result->next=subSortEdge(a->next, b);
	}
	else
	{

		result=b;
		result->next=subSortEdge(a,b->next);
	}
	return result;
}
void splitEdge(Node* head, Node** a, Node** b)
{
	
	struct Node* first;
	struct Node* second;
	first=head->next;
	second=head;
	int i=0;
	while(first!=NULL)
	{
		first=first->next;
		if(first!=NULL)
		{
			second=second->next;
			first=first->next;
		}
		i++;
		
	}
	
	*a=head;
	*b=second->next;
	second->next=NULL;
	
}
void mergeSortEdge(struct Node** list)
{
	
	Node* head=*list;
	Node* a;
	Node* b;
	if((head==NULL)||head->next == NULL)
	{
		return;
	}
	
	splitEdge(head,&a,&b);
	
	mergeSortEdge(&a);
	mergeSortEdge(&b);
	*list =subSortEdge(a,b);
}
void insert_vertice(struct Node** start, string city1, string city2)
{
	struct Node* newNode = new Node;
	newNode->city1= city1;
	newNode->city2 = city2;
	newNode->next = *start;
	if(*start != NULL)
	(*start)->prev= newNode;
	*start = newNode;
}
void insert_Front(struct Node** start, int new_data, int new_index)
{
	struct Node* newNode = new Node;
	newNode->data = new_data;
	newNode->index= new_index;
	newNode->next = *start;
	if(*start != NULL)
	(*start)->prev= newNode;
	*start = newNode;
}
void insert_Edge(struct Node** start, string cityone, string citytwo, int weight)
{
	struct Node* newEdge = new Node;
	newEdge->city1 = cityone;
	newEdge->city2= citytwo;
	newEdge->weight = weight;
	newEdge->next = *start;
	if(*start != NULL)
	(*start)->prev= newEdge;
	*start = newEdge;
}
void insert_Edge(struct Node** start, string cityone, string citytwo, int weight, int index)
{
	struct Node* newEdge = new Node;
	newEdge->city1 = cityone;
	newEdge->city2= citytwo;
	newEdge->index=index;
	newEdge->weight = weight;
	newEdge->next = *start;
	if(*start != NULL)
	(*start)->prev= newEdge;
	*start = newEdge;
}
void insert_After(struct Node* prev_node, int new_data, int new_index)
{
	if (prev_node == NULL)
	return;
	struct Node* newNode = new Node;
	newNode->data = new_data;
	newNode->index= new_index;
	newNode->next = prev_node->next;
	prev_node->next = newNode;
	newNode->prev = prev_node;
	if(newNode->next != NULL)
	newNode->next->prev = newNode;
}
void insert_end(struct Node** head, int new_data, int new_index)
{
	struct Node* newNode = new Node;
	struct Node* last = *head;
	newNode->index = new_index;
	newNode->data = new_data;
	newNode->next = NULL;
	
	if(*head == NULL)
	{
		newNode->prev=NULL;
		*head = newNode;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNode;
	newNode->prev = last;
	return;
}
void displayEdge(struct Node* edge)
{ 
	int i=0;
	int weighttot=0;
	while (edge->next!= NULL)
	{
		i++;
		cout<<i<<": "<<edge->city1<<" to "<<edge->city2<<" distance:"<<edge->weight<<endl;
		weighttot+=edge->weight;
		edge = edge->next;
		if(edge->city1.empty()){break;}
		
	}
	cout<<"Distance is :" <<weighttot;
	cout<<endl;
}
void displayEdge(struct Node* edge, string outputfilename)
{
	 
	ofstream myfile;
	myfile.open(outputfilename);
	int i=0;
	int weighttot=0;
	while (edge->next!= NULL)
	{
		i++;
		cout<<i<<": "<<edge->city1<<" to "<<edge->city2<<" distance:"<<edge->weight<<endl;
		myfile<<i<<": "<<edge->city1<<" to "<<edge->city2<<" distance:"<<edge->weight<<endl;
		weighttot+=edge->weight;
		edge = edge->next;
		if(edge->city1.empty()){break;}
		
	}
	cout<<"Distance is :" <<weighttot;
	myfile<<"*Distance is :" <<weighttot<<endl;
	cout<<endl;
}
void displayEdge(struct Node* edge, string outputfilename, int jj)
{
	 
	ofstream myfile;
	myfile.open(outputfilename);
	int i=0;
	int weighttot=0;
	while (edge->next!= NULL)
	{
		i++;
		myfile<<i<<": "<<edge->city1<<" to "<<edge->city2<<" distance:"<<edge->weight<<endl;
		weighttot+=edge->weight;
		edge = edge->next;
		if(edge->city1.empty()){break;}
		
	}
	myfile<<"*Distance is :" <<weighttot<<endl;
	cout<<endl;
}
