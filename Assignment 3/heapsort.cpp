#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
#include "rflist.h"

using namespace std;

//used geeksforgeeks.org/heap-sort/ implementation
void heapify(int arr[])