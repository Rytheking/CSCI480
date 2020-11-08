#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
#include "hashtable.h"
#include "heapsort.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout<<"What would you like to run?"<<endl;
    cout<<"0: Terminate Program (exit)"<<endl;
    cout<<"1: Task 1 & 2: Index quicksort using median of 3"<<endl;
    cout<<"2: Task 3: Kth value finder(ass3B)"<<endl;
    cout<<"3: Task 4: Pride and Prejudice Heapsort with hashtable (ass3C)"<<endl;
    int c;
    cin>>c;
    if(c==0)
    {
        exit(1);
    }
    else if(c==1)
    {
        //call ass3A
    }
    else if(c==2)
    {
        //call ass3B
    }
    else if(c==3)
    {
        //do task 4
    }
    return 0;
}