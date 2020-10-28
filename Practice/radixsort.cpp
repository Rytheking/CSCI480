
#include <iostream>
#include <stdlib.h> 
#include <cmath>
#include <chrono>
#include <algorithm>
#include <vector>
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

int getSize(struct Node** head)
{
	
	struct Node* last = *head;
	if(*head == NULL)
	{
		return 0;
	}
	int i = 0;
	while(last->next != NULL)
	{
		last = last->next;
		i++;
	}
	return i;
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
struct Node* getlast(struct Node* node)
{
	struct Node* last = node;
	
	while(last->next != NULL)
	{
		last = last->next;
	}
	
	return last;
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

int getdigits(struct Node* node)
{
  int max = node->data;
  int digits=0;
  while(node!=NULL)
  {
	  if(node->data>max)
	  max=node->data;
	  node=node->next;
  }
  while(max){
	  max=max/10;
	  digits++;
  }
  return digits;
}

struct Node* radixSort(struct Node* list , int digits) 
{
	
	int n=1;
	struct Node **bucket, *next, *temp;
	
	bucket = ((struct Node**)malloc(sizeof(*bucket) *10));
	for(int j=0; j<digits; j++)
	{
		while(list!=NULL)
		{
			
			next=list->next;
			list->next= bucket[(list->data/n)%10];
			bucket[(list->data/n)%10] = list;
			list = list->next;
			list=next;
		}
		for(int i =0; i<10;i++)
		{
			while(bucket[i]!=NULL)
			{
				
				temp = bucket[i]->next;
				bucket[i]->next = list;
				list = bucket[i];
				bucket[i]= bucket[i]->next;
				bucket[i]= temp;
			}
		}
		n *=10;
	}
   return list;
}

int main()
{
	srand(700453594);
	struct Node* node = new Node;
	for(int i =0; i<200000; i++)
	{
		insert_Front(&node , rand()%2000000);
	}
	displayList(node);
	auto start = chrono::steady_clock::now();
	
	radixSort(node, getdigits(node));
	auto end = chrono::steady_clock::now();
	cout <<endl<< "Radix Sort Elapsed time in nanoseconds : " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns" <<endl;
	displayList(node);
	
	
	
	vector<int> myvector;
	for(int i =0; i<200000; i++)
	{
		myvector.push_back(rand()%2000000);
	}
	auto start1 = chrono::steady_clock::now();
	sort(myvector.begin(), myvector.end());
	auto end1 = chrono::steady_clock::now();
	cout <<endl<< "Sort Elapsed time in nanoseconds : " << chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count() << " ns" <<endl;
}
	
