#ifndef KRUSKALS_H
#define KRUSKALS_H

#include "city.h"
#include "ryanslist.h"

Node* kruskals(struct Node* edge);
void algo(struct City* city, std::string outputname);
void algo(struct City* city, std::string outputname, int i);
City * read_the_file(std::string name);




#endif

