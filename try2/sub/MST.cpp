/*I declare that all material in this assessment task is my work except where there
is clear acknowledgement or reference to the work of others. I further declare that I
have complied and agreed to the CMU Academic Integrity Policy at the University
website.
http://www.coloradomesa.edu/student-services/documents
Submissions that do not include the above academic integrity statements will not be
considered.
Student Name: Ryan Fleming .UID: 700453594. Date: October 18, 2020*/

/*TRUE FALSE FOR ASSIGNMENT 2 - Ryan Fleming
 * 
 * If some edge weights are negative, the shortest paths from s can be obtained by adding a constant C to every edge weight, 
 * large enough to make all edge weights non-negative, and running Dijkstra’s algorithm.	
   
        False, if we have a graph with two subgraphs both seeking to go from A to D, a path through ABCD exists with a weights 
        * between all being 6 and having a shortest path of weight 18 opposed to another subgraph with a total weight of 20 and 
        * just two edges between AED the addition of any constant C will have a greater impact on the first subgraph composed of more edges.
        *  This can be seen in the math of 6+6+6=18, with a constant of 10 16+16+16=48 (30 more) and the other subgraph goes from 10+10=20
        *  to 20+20=40. We now have a shorter path where one did not exist before. This invalidates the assumption of being able to add a 
        * constant to negate negatives.
    
   Let P be a shortest path from some vertex  s to some other vertex t. If the weight of each edge in the graph is squared, P remains a shortest path from s to t
   
       False, if we have a graph with two subgraphs both seeking to go from A to D, a path through ABCD exists with a weights of A->B 2,
       *  B->C 2, C->D 2 and subgraph consisting of AEFGHIJK with each edge having an equivalent weight of 1, totaling for 7, 
       * if we squared these edge weights the path consisting of ABCD would have a weight of 12 and AEFGHIJK would still have a total weight
       *  of 7. This again invalidates the proposition as we have changed the shortest path. 
   
 * 
 * */
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int countOfCities=0;
int countOFEdges=0;
int distancetot;
fstream file;

#define MAX 9999999;

//Node Structure and functions (to be put into header file)
struct Node{
	int index;
	int data;
	string x;
	Node* next=NULL;
};
void insert_Front(struct Node** start, int new_data, int new_index){
	struct Node* newNode = new Node;
	newNode->data = new_data;
	newNode->index= new_index;
	newNode->next = *start;
	*start = newNode;
}
void insert_Front(struct Node** start, string new_data){
	struct Node* newNode = new Node;
	newNode->x = new_data;
	newNode->next = *start;
	*start = newNode;
}
void insert_End(struct Node** start, int new_data, int new_index){
	struct Node* newNode = new Node;
	struct Node* last = *start;
	newNode->index = new_index;
	newNode->data = new_data;
	newNode->next = NULL;
	
	if(*start == NULL)
	{
		*start = newNode;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNode;
	return;
	
}
void displayList(struct Node* list){ 
	while (list!= NULL)
	{
		cout<<list->index<<": "<<list->data<<" ";
		list = list->next;
	}
	cout<<endl;
}
void cleanNode(Node **node){
	struct Node* temp = *node, *prev;
	while (temp != NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL) return;
	prev->next=temp->next;
	free(temp);
}

struct Edge;
//City Structure and functions (to be put into header file)
struct City{
	int index;
	Node* distlist;
	string name;
	int distFromStart=MAX;
	City* next=NULL;
	Edge* list=NULL;
};
void insert_End(struct City** start, int new_index,string new_data){
	struct City* newCity = new City;
	struct City* last = *start;
	newCity->index = new_index;
	newCity->name = new_data;
	newCity->next=NULL;
	
	if(*start == NULL)
	{
		*start = newCity;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newCity;
	return;
	
}
void insert_End(struct City** start,  struct City* newCity){
	struct City* last = *start;
	newCity->next=NULL;
	if(*start == NULL)
	{
		*start = newCity;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newCity;
	return;
	
}
void insert_Front(struct City** start,  int index, string name){
	struct City* newCity = new City;
	newCity->name = name;
	newCity->index= index;
	newCity->next = *start;
	*start = newCity;
}
void insert_Front(struct City** start,  struct City* newCity){
 
	newCity->next = *start;
	*start = newCity;
}
void displayCity(struct City* city){ 
	while (city!= NULL)
	{
		cout<<city->index<<":"<<city->name<<endl;
		displayList(city->distlist);
		city = city->next;
	}
}
City *findCity(struct City* city, int key){
	while(city!=NULL)
	{
		if(city->index==key)
		{
			return city;
		}
		city=city->next;
	}
	struct City* j=new City;
	return j;
}
City* findIndex(struct City* city, string key){
	while(city!=NULL)
	{
		if(city->name==key)
		{
			return city;
		}
		city=city->next;
	}
	struct City* j=new City;
	return j;
}


//Graph structure
struct Edge{
	City* start=NULL;
	City* end=NULL;
	int weight;
	Edge* next=NULL;
};
void insert_Front(struct Edge** start,  int cost){
	struct Edge* newEdge = new Edge;
	newEdge->weight= cost;
	newEdge->next = *start;
	*start = newEdge;
}
void insert_End(struct Edge** start,  int cost){
	struct Edge* newEdge = new Edge;
	struct Edge* last = *start;
	newEdge->weight = cost;
	if(*start == NULL)
	{
		*start = newEdge;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newEdge;
	return;
	
}
void displayEdge(struct Edge* edge){ 
	while (edge->next!=NULL)
	{
		cout<<edge->start->name<<" to "<<edge->end->name<<" distance: "<<edge->weight<<endl;
		edge = edge->next;
	}
}
void cleanEdge(Edge **edge){
	struct Edge* temp = *edge, *prev;
	while (temp != NULL&&temp->start!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL) return;
	prev->next=temp->next;
	free(temp);
}
int getEdgeWeight(Edge *edge, City* a, City* b){
	while(edge!=NULL)
	{
		if(edge->start==a and edge->end==b)
		{
			return edge->weight;
		}
		edge=edge->next;
	}
	return 0;
}

//Union Find Subset
struct subset{
	int parent;
	int rank;
};
int find(subset subsets[], int i){
	if(subsets[i].parent !=i)
		subsets[i].parent=find(subsets,subsets[i].parent);
	return subsets[i].parent;
}
void Union(subset subsets[], int x, int y){
	int xroot=find(subsets,x);
	int yroot=find(subsets,y);
	if(subsets[xroot].rank <subsets[yroot].rank)
		subsets[xroot].parent=yroot;
	else if(subsets[xroot].rank >subsets[yroot].rank)
		subsets[yroot].parent=xroot;
	else
	{
		subsets[yroot].parent=xroot;
		subsets[xroot].rank++;
	}
}


//Sorting Algorithm
Edge* subSortEdge(Edge* a, Edge* b){
	
	Edge* result = NULL;
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
void splitEdge(Edge* head, Edge** a, Edge** b){
	
	struct Edge* first;
	struct Edge* second;
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
void mergeSortEdge(struct Edge** list){
	
	Edge* head=*list;
	Edge* a;
	Edge* b;
	if((head==NULL)||head->next == NULL)
	{
		return;
	}
	
	splitEdge(head,&a,&b);
	
	mergeSortEdge(&a);
	mergeSortEdge(&b);
	*list =subSortEdge(a,b);
}


//Graph
struct Graph{
	int V, E;
	
	Edge* edge;
};
Graph* createGraph(int V, int E, Edge* edges)  {  
    Graph* graph = new Graph;  
    graph->V = V;  
    graph->E = E;  
    graph->edge = new Edge[E];
    mergeSortEdge(&edges); 
    for(int i =0; i<E; i++)
    {
		graph->edge[i].start=edges->start;
		graph->edge[i].end=edges->end;
		graph->edge[i].weight=edges->weight;
		edges=edges->next;
	} 
  
    return graph;  
}  


//main helper functions
/*
 * reading file
 * adding edges
 * constructing MST using kruskals
 */
City* readDisFile(string name){
	string line;
	file.open(name,ios::in);
	City * city=new City;
	City *plchldr=city;
	int i=0, j=0, thisdist, ind;
	string cityname, distances;
	while(getline(file, line))
	{
		if(line[0]!='*')
		{
			if(!isdigit(line[0]))
			{
				line=line.substr(0,line.find('['));
				cityname=line.substr(0,line.find(','))+" ("+line.substr(line.find(',')+2,line.find('['))+')';
				insert_End(&city,i+1,cityname);
				city=city->next;
				j=i;
				i++;
				
			}
			else
			{
				distances=line;
				while(distances.length()>0)
				{
					ind=distances.find(' ');
					if(ind==-1)
					{
						thisdist=stoi(distances.substr(0,ind));
						insert_Front(&(city->distlist), thisdist,j);
						j--;
						break;
					}
					else
					{
						thisdist=stoi(distances.substr(0,ind));
						insert_Front(&(city->distlist), thisdist,j);
						j--; 
						distances=distances.substr(ind+1);
					}
				}
			}
		}
	}
	countOfCities=i;
	return (plchldr->next);
}
Edge* cityToEdge(struct City* city){
	int i =0;
	Edge * edge=new Edge;
	City * end=new City;
	City * plc=city;
	city=city->next;
	while(city!=NULL)
	{
		while(city->distlist!=NULL)
		{
			end=findCity(plc, city->distlist->index);
			if(city!=NULL)
			{
				insert_Front(&edge,city->distlist->data);
				edge->start=city;
				edge->end= end;
				insert_Front(&edge,city->distlist->data);
				edge->start=end;
				edge->end= city;
				i+=2;
			}
			city->distlist=city->distlist->next;
		}
		city=city->next;
	}
	countOFEdges=i;
	cleanEdge(&edge);
	return edge;
}
Edge* KruskalMST(Graph* graph){
	int V=graph->V;
	Edge* newEdges=new Edge;
	Edge result[V];
	int e = 0;
	int i=0;
	
	subset *subsets=new subset[(V*sizeof(subset))];
	
	for(int v=0; v<V; v++)
	{
		subsets[v].parent=v;
		subsets[v].rank=0;
	}
	int totweight=0;
	while (e < V-1 && i < countOFEdges)  
{
        Edge next_edge = graph->edge[i++]; 
        i++;
        int x = find(subsets, next_edge.start->index);  
        int y = find(subsets, next_edge.end->index);  
 
        if (x != y)  
        {  
            result[e++] = next_edge;  
            insert_Front(&newEdges, next_edge.weight);
            newEdges->start=next_edge.start;
            newEdges->end=next_edge.end;
            insert_Front(&newEdges, next_edge.weight);
            newEdges->start=next_edge.end;
            newEdges->end=next_edge.start;
            Union(subsets, x, y);
              
        }  
        
    }
    
    ofstream myfile;
	myfile.open("map.txt");

	for (i = 0; i < e; ++i)
		totweight+=result[i].weight;
	myfile<<"*Distance is :" <<totweight<<endl;
    for (i = 0; i < e; ++i) {
		myfile<<i+1<<": "<<result[i].start->name<<" to "<<result[i].end->name<<" distance= "<<result[i].weight<<endl;
		totweight+=result[i].weight;
	}
	distancetot=totweight;
	
    return newEdges;   
	
}


//main
int main(int argc, char *argv[])
{
	string a=argv[0];
	if(a=="./MST"){
		Edge* newEdges=KruskalMST(createGraph(countOfCities, countOFEdges, (cityToEdge(readDisFile(argv[1])))));
		displayEdge(newEdges);
	}
	else if(a=="./journey"&&argc==4){
		string startCity=argv[2], endCity=argv[3];
		City * city=readDisFile(argv[1]);
		Edge* edges=cityToEdge(city);
		Edge* plc=edges;
		struct City *startC=findIndex(city,startCity);
		struct City *endC=findIndex(city,endCity);
		startC->next=0;
		struct City *queue= startC;
		queue->distFromStart=0;
		int weight;
		weight=0;
		int c = MAX;
		queue->list=new Edge;
		while(queue!=NULL)
		{
			edges=plc;
			while(edges->next!=NULL)
			{
				if(edges->start==queue and edges->end->distFromStart==c)
				{
					insert_End(&queue, edges->end);
					edges->end->distFromStart=edges->weight+queue->distFromStart;
					edges->end->list=queue->list;
					insert_Front(&edges->end->list, edges->weight);
					edges->end->list->start=queue;
					edges->end->list->end=edges->end;
				}
				edges=edges->next;
			}
			queue=queue->next;
		}
		cout<<startC->name<<" to "<<endC->name<<" Distance is:"<<endC->distFromStart<<endl;
		displayEdge(endC->list);
		
	}
	else if(a=="./journey" && argc!=4)
		cout<<"Please enter in format \".\\journey \"distances.txt\" \"City (ST)\" \"City (ST)\"";
	return 0;
}
