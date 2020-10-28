#include <iostream>

using namespace std;

struct Node 
{
	int data;
	struct Node* prev;
	struct Node* next;
};
void insert_Front(struct Node** start, int new_data)
{
	struct Node* newNode = new Node;
	newNode->data = new_data;
	
	newNode->next = *start;
	if(*start != NULL)
	(*start)->prev= newNode;
	
	*start = newNode;
}

Node* SortedMerge(Node* a, Node* b)
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
	if (a->data <= b->data)
	{
		result =a;
		result->next=SortedMerge(a->next, b);
	}
	else
	{
		result=b;
		result->next=SortedMerge(a,b->next);
	}
	return result;
}

void split(Node* head, Node** a, Node** b)
{
	Node* first;
	Node* second;
	first=head->next;
	second=head;
	while(first!=NULL)
	{
		first=first->next;
		if(first!=NULL)
		{
			second=second->next;
			first=first->next;
		}
	}
	*a=head;
	*b=second->next;
	second->next=NULL;
}
void mergeSort(struct Node** list)
{
	Node* head=*list;
	Node* a;
	Node* b;
	if((head==NULL)||head->next == NULL)
	{
		return;
	}
	split(head,&a,&b);
	mergeSort(&a);
	mergeSort(&b);
	*list =SortedMerge(a,b);
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
int main(int argc, char **argv)
{
	srand(700453594);
	struct Node* node = new Node;
	for(int i =0; i<10; i++)
	{
		insert_Front(&node , rand()%1000000);
	}
	cout << "Array before Sorting: ";
	displayList(node);
	mergeSort(&node);     //(n-1) for last index
	cout << "Array after Sorting: ";
	displayList(node);
	
	return 0;
}

