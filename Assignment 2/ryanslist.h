#ifndef RYANSLIST_H
#define RYANSLIST_H

#include <iostream>

struct Node {
	int index;
	int size;
	int data;
	int weight;
	bool visited=false;
	std::string city1;
	std::string city2;
	struct Node* next=NULL;
	struct Node* prev=NULL;
};
extern void cleanList(struct Node* node);

extern void erase(struct Node* node);

extern Node* subSortEdge(Node* a, Node* b);

extern void splitEdge(Node* head, Node** a, Node** b);

extern void mergeSortEdge(struct Node** list);

extern void insert_vertice(struct Node** start, std::string city1, std::string city2);

extern void insert_Front(struct Node** start, int new_data, int new_index);

extern void insert_Edge(struct Node** start, std::string cityone, std::string citytwo, int weight);
extern void insert_Edge(struct Node** start, std::string cityone, std::string citytwo, int weight, int index);

extern void insert_After(struct Node* prev_node, int new_data, int new_index);

extern void insert_end(struct Node** head, int new_data, int new_index);

extern void displayEdge(struct Node* edge);

void displayEdge(struct Node* edge, std::string input);

void displayEdge(struct Node* edge, std::string input, int i);


#endif
