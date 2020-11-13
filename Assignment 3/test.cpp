#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
#include "vectorf.h"
#include "hashtable.h"
#include "heaprf.h"

using namespace std;

int main(int argc, char* argv[])
{
    ifstream file;
    file.open("test.txt");
    string word;
    HashMap<string,int> map;
    int i=0;
    while(file>>word)
    {
        map.insertNode(word, i++);
        
    }
    //map.display();
}