#include "city.h"
#include "ryanslist.h"
#include <iostream>
using namespace std;

void erasecity(struct City* city)
{
	if(city==NULL)
	return;
	if(city->prev!=NULL)
	city->prev->next=city->next;
	if(city->next!=NULL)
	city->next->prev=city->prev;
}


void cleanCity(struct City* city)
{
		while (city!=NULL)
		{
			if(city->index!=0)
			{
				cleanList(city->listofdistances);
			}
			else
			{
				erasecity(city);
			}
			city = city->next;
			
		}

}

void insert_City(struct City** start, string city_name, string state_name, int new_index, struct Node* list)
{
	struct City* newCity = new City;
	struct City* last= *start;
	newCity->name = city_name;
	newCity->state = state_name;
	newCity->index = new_index;
	newCity->listofdistances=list;
	newCity->next=NULL;
	if(*start == NULL)
	{
		newCity->prev=NULL;
		*start=newCity;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = newCity;
	newCity->prev = last;
	return;
	
}
void insert_CityFront(struct City** start, string city_name, string state_name, int new_index, struct Node* list)
{
	struct City* newCity = new City;

	newCity->name = city_name;
	newCity->state = state_name;
	newCity->index = new_index;
	newCity->listofdistances=list;
	newCity->next=*start;
	if(*start != NULL)
	(*start)->prev= newCity;
	*start = newCity;
	
}
string findCity(struct City* cities,int index)
{
	while (cities != NULL)
	{
		if(cities->index==index){return ""+(cities->name)+" ("+(cities->state)+")";}
		cities = cities->next;
	}
	return "Not found";
}

void displayCity(struct City* city)
{
	 
	int i=0;
	while (city->next!= NULL)
	{
		i++;
		cout<<i<<": "<<city->name<<" to "<<city->next->name<<" distance:"<<endl;
		city=city->next;
	}
	cout<<endl;
}
