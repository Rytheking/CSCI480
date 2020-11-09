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
    file.open("book.txt");
    string word;
    vectoRF<string> heap;
    while(file>>word)
    {
        cout<<word<<endl;
        heap.push(word);
    }
    heap.print();
}