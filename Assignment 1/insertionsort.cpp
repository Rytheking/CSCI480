/*
 * insertionsort.cpp
 * Copyright 2020 Ryan <ryan@ryanlinux>
 */
#include <iostream>

using namespace std;
int const size = 100000;
int array[size];

void display(int *arr) {
   for(int i = 0; i<size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

void generateRandos(int *arr)
{
	srand(700453594);
	for(int i =0; i<100000;i++)
	{
		arr[i]=rand()%100000;
	}
}

void insertionSort(int *arr)
{
	int temp, h;
	for(int i =1; i<size;i++)
	{
		temp =arr[i];
		h=i;
		while(h>0&&arr[h-1]>temp)
		{
			arr[h] = arr[h-1];
			h--;
		}
		arr[h]=temp;
	}
}

int main(int argc, char **argv)
{
	
	generateRandos(array);
	display(array);
	insertionSort(array);
	display(array);
	
	return 0;
}

