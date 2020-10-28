#ifndef CITY_H
#define CITY_H
#include <iostream>
#include "ryanslist.h"

struct City{
	
		int index;
		std::string name;
		std::string state;
		bool visited=false;
		struct Node* listofdistances;
		struct City* next;
		struct City* prev;
};

extern std::string findCity(struct City* cities,int index);
extern void insert_CityFront(struct City** start, std::string city_name, std::string state_name, int new_index, struct Node* list);
extern void insert_City(struct City** start, std::string city_name, std::string state_name, int new_index, struct Node* list);
extern void cleanCity(struct City* city);
extern void erasecity(struct City* city);
extern void displayCity(struct City* city);

	
#endif
