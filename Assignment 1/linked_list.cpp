
#include <iostream>
#include <stdlib.h> 
using namespace std;

struct Node 
{
	int data;
	struct Node* prev;
	struct Node* next;
};
void erase(struct Node* node)
{
	if(node==NULL)
	return;
	node->prev->next=node->next;
	node->next->prev=node->prev;
}
void insert_Front(struct Node** start, int new_data)
{
	struct Node* newNode = new Node;
	newNode->data = new_data;
	
	newNode->next = *start;
	if(*start != NULL)
	(*start)->prev= newNode;
	
	*start = newNode;
}

void insert_After(struct Node* prev_node, int new_data)
{
	if (prev_node == NULL)
	return;
	struct Node* newNode = new Node;
	newNode->data = new_data;
	newNode->next = prev_node->next;
	prev_node->next = newNode;
	newNode->prev = prev_node;
	if(newNode->next != NULL)
	newNode->next->prev = newNode;
}

void insert_end(struct Node** head, int new_data)
{
	struct Node* newNode = new Node;
	struct Node* last = *head;
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

void displayList(struct Node* node)
{
	struct Node* last;
	
	while (node != NULL)
	{
      cout<<node->data<<"<==>";
      last = node;
      node = node->next;
    }
   if(node == NULL)
   {
	   cout<<"NULL";
   }
   last->next=NULL;
}

int getmax(struct Node* node)
{
  int max = node->data;
  while(node!=NULL)
  {
	  if(node->data>max)
	  max=node->data;
	  node=node->next;
  }
  return max;
}

void radixSort(int *Node, int max) 
{
   
}


int main()
{
	
	displayList(node);
}
	
