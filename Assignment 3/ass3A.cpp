//Ryan Fleming
//Academic Integrity Statement

//Sort with Quicksort
//Add extra entry
//Find sorted order of array
//Output sorted order without changing original array
/*
 *A[5]={2,5,6,19,3}
 *index:0,1,2, 3,4}
 * Output: 0,4,1,2,3
 *
 */
//All whitelisted libraries

#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"

using namespace std;



int main(int argc, char *argv[]){
	bool invalidinput=false;
	int * A;
	int * I;
	int n;
	while(!invalidinput)
	{
		cout<<"How many elements would you like to sort? (10k is max)"<<endl;
		cin>>n;
		invalidinput=n<=10000;
		if(!invalidinput)
			cout<<"I'm sorry "<<n<<" is over the 10k limit by "<<n-10000<<endl;
	}
	
	A = (int *) malloc((n)*sizeof(int));
	I = (int *) malloc((n)*sizeof(int));
	//change to seeded by time
	srand(70);
	for(int i=0; i<n; i++)
	{
		I[i]=i;
		A[i]=rand()%10000;
	}
	//I[n]=n;
	//A[n]=10001;
		cout<<"Array"<<endl;
	for(int i=0; i<n; i++)
	{
		if(i%10==0&&i!=0)
			cout<<endl;
		cout<<A[i]<<"\t";
	}
	
	quickSort(A, I, 0, n-1);
	cout<<"Array"<<endl;
	for(int i=0; i<n; i++)
	{
		if(i%10==0&&i!=0)
			cout<<endl;
		cout<<A[i]<<"\t";
	}
	cout<<endl;
	cout<<"Sorted index array"<<endl;
	for(int i=0; i<n; i++)
	{
		if(i%10==0&&i!=0)
			cout<<endl;
		cout<<I[i]<<"\t";
	}
	cout<<endl;
	cout<<"Sorted array (acheived by iterating through unchanged array using index[i] as the call index)"<<endl;
	for(int i=0; i<n; i++)
	{
		if(i%10==0&&i!=0)
			cout<<endl;
		cout<<A[I[i]]<<"\t";
	}
	cout<<endl;
	free(A);
	free(I);
	return 0;
}
