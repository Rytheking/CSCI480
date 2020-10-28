#include "kruskals.h"
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "city.h"
#include "ryanslist.h"

using namespace std;

Node* kruskals(struct Node* edge)
{
	struct Node* listofvisitedvertices=new Node;
	struct Node* placeholder = new Node;
	struct Node* MST=new Node;
	int state=0;
	int i=0;
	edge=edge->next;
	while(edge!=NULL)
	{
	
		state=0;
		placeholder=listofvisitedvertices;
		
		while(listofvisitedvertices!=NULL)
		{
			if(edge->city2==listofvisitedvertices->city2)
			{
				
				state=1;
				break;
			}
			listofvisitedvertices=listofvisitedvertices->next;
			state=0;
		}
		listofvisitedvertices=placeholder;
		
		if(state==0)
		{
			
			insert_Edge(&MST, edge->city1, edge->city2, edge->weight);
			insert_vertice(&listofvisitedvertices, edge->city1, edge->city2);
			
			i++;
		}
		edge=edge->next;
	}
	MST->size=i;
	cout<<MST->size<<endl;
	return MST;
}

//Constructs a list of edges from city data
//Sorts list of edges using mergesort
//passes sorted list of edges into kruskals
//Prints out the MST and writes it to file using display method from ryanslist


void algo(struct City* city, string outputname, int j)
{
	
	struct Node* listofvisitedvertices=new Node;
	struct Node* edges=new Node;
	struct City* cityholder=city;
	int cityindex;
	string name;
	city=city->next;
	while(city!=NULL)
	{
		cityindex=city->index;
		while(city->listofdistances!=NULL)
		{
			
			insert_Front(&listofvisitedvertices, city->listofdistances->index, 1);
			insert_Edge(&edges, findCity(cityholder,cityindex), findCity(cityholder,city->listofdistances->index), city->listofdistances->data);
			city->listofdistances=city->listofdistances->next;
		}
		city=city->next;
	}
	//cleanList(edges);
	mergeSortEdge(&edges);
	displayEdge(kruskals(edges), outputname, j);
}

void algo(struct City* city, string outputname)
{
	struct Node* listofvisitedvertices=new Node;
	struct Node* edges=new Node;
	struct City* cityholder=city;
	int cityindex;
	string name;
	city=city->next;
	
	while(city!=NULL)
	{
		cityindex=city->index;
		
		while(city->listofdistances!=NULL)
		{
			
			insert_Front(&listofvisitedvertices, city->listofdistances->index, 1);
			insert_Edge(&edges, findCity(cityholder,cityindex), findCity(cityholder,city->listofdistances->index), city->listofdistances->data);
			city->listofdistances=city->listofdistances->next;
		}
		city=city->next;
	}
	mergeSortEdge(&edges);
	displayEdge(kruskals(edges), outputname);
	
}


City *read_the_file(string name){
	fstream newfile;
	City* city=new City;
	City* city1=city;
	newfile.open(name,ios::in); //open a file to perform read operation using file object
	if (newfile.is_open())
	{   //checking whether the file is open
		string cityandstate,distances,cityname,statename;
		int i=0,j;
		Node* start=new Node;
		City* city=new City;
		int endofname,endofcity,nextdist;
		//state=state+1-1;
		while(getline(newfile, cityandstate))
		{ //read data from file object and put it into string.
			if(cityandstate[0]!='*')
			{
				if(isdigit(cityandstate[0]))
				{
					distances=cityandstate;
					while(distances.length()>0)
					{
						nextdist=distances.find(' ');
						if(nextdist==-1)
						{
							j--;
							if(j!=0)
							{
								insert_Front(&start,stoi(distances),j);
							}
							
							break;
						}
						else
						{
							j--;
							if(j!=0)
							{
								insert_Front(&start,stoi(distances.substr(0,nextdist)),j);
								distances=distances.substr(nextdist+1);
							}
						}
					}
				}
				else
				{
					if(i>1)
					{
						
						insert_City(&city, cityname,statename,i,start);
					}
					endofname=cityandstate.find('[');
					endofcity=cityandstate.find(',');
					cityname=cityandstate.substr(0,endofcity);
					statename=cityandstate.substr(endofcity+2,endofname-(endofcity+2));
					i++;
					start= new Node;
					j=i;
					if(i==1)
					{
						
						insert_CityFront(&city, cityname,statename,i,NULL);
					}
				}
			}
			
		}
		cleanCity(city);
		
		newfile.close(); //close the file object.
		return city;
	}
	return city;
}
