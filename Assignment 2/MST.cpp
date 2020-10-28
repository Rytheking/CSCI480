#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "city.h"
#include "ryanslist.h"
#include "kruskals.h"

using namespace std;

/*TRUE FALSE FOR ASSIGNMENT 2
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



//performs kruskals algorithm, passed in a list of edges which was sorted by mergesort
// constructs an MST of the list, returns a node at the start of the MST

int main(int argc, char *argv[])
{
	algo(read_the_file(argv[1]),"map.txt");
	return 0;
}
