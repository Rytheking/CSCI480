#ifndef HEAPRF_H
#define HEAPRF_H
#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
#include "vectorf.h"

using namespace std;
template<typename T>
void heapify(vectoRF<T> heap, int n, int i)
{
            int largest =i, l=2*i+1, r=2*i+2;
            if(l<n and heap[l] > heap[largest])
                largest =l;
            if(r<n and heap[r] > heap[largest])
                largest=r;
            if(largest!=i)
            {
                swap(heap[i], heap[largest]);
                heapify(heap,largest);
            }
}
template<typename T>
void heapSort(vectoRF<T> heap)
{
    int n=heap.size();
    for(int i=n/2-1; i>=0; i--)
        heapify(heap,n,i);
    for(int i=n-1; i>0; i--)
    {
        swap(heap[0],heap[i]);
        heapify(heap, i, 0);
    }
}
#endif
