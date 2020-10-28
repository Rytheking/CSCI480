#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "city.h"
#include "ryanslist.h"
#include "kruskals.h"

using namespace std;

//reads map.txt created by the call of MST using the distance file
//to create a list of edges between the start city and end city by
//searching backwards from the end city to the start city to ensure
//no dead ends


int main(int argc, char *argv[])
{
	algo(read_the_file(argv[1]),"map.txt",1);
	//cout<<"I am atleast getting here"<<endl;
	fstream newfile;
	newfile.open("map.txt",ios::in); //open a file to perform read operation using file object
	if (newfile.is_open())
	{   //checking whether the file is open
		string cityfrom, cityto,line;
		int weight;
		string input1=argv[2], input2=argv[3];
		//cout<<input1<<" to " <<input2<<endl;
		Node* start=new Node;
		int i=0;
		while(getline(newfile, line))
		{
			if(line[0]!='*')
			{
				int end=line.find(' ')+1;
				line=line.substr(end);
				end=line.find(" to ");
				cityfrom=line.substr(0,end);
				line=line.substr(end+4);
				end=line.find(" distance");
				cityto=line.substr(0,end);
				line=line.substr(end);
				int start1 = line.find(':')+1;
				weight=stoi(line.substr(start1));
				insert_Edge(&start, cityfrom,cityto,weight,i);
				i++;
			}
			else
			{
				break;
			}
		}
		start->size=i;
		cout<<start->size;
		start=start->next;
		Node* placeholder=start;
		//mergeSortEdge(&start);
		start=placeholder;
		string temp1,temp2,temp3;
		temp1=input1;
		temp2=input2;
		temp3=" ";
		int weighttot=0;
		Node* newEdges= new Node;
		while(start!=NULL)
		{
			if(start->city2==temp2)
			{
				weighttot+=start->weight;
				insert_Edge(&newEdges,start->city1,start->city2,start->weight);
				if(start->city1==temp1)
				{
					cout<<"hahahah"<<start->city2<<" is "<<temp2<<endl;
					break;
				}
				temp3=temp2;
				temp2=start->city1;
				start=placeholder;
			} 
			else
			{
				start=start->next;
				
			}
		}
		cout<<weighttot<<endl;
		displayEdge(newEdges);
		
	}
	return 0;
}
