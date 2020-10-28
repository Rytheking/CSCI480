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
 */


//All whitelisted libraries
#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>

using namespace std;


int partition(int arr[], int lower, int upper){
	int i,j,pivot,temp;
	pivot=arr[lower];
	i=lower;
	j=upper+1;
	do
	{
		cout<<"b";
		while(arr[i++]>=pivot);
		while(arr[j--]<=pivot);
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}while(i>=j);
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	temp=arr[lower];
	arr[lower]=arr[j];
	arr[j]=temp;
	return j;
}

void quickSort(int arr[], int lower, int upper){
	int j;
	if(lower<upper)
	{
		j=partition(arr,lower,upper);
		quickSort(arr,lower,j-1);
		quickSort(arr,j+1,upper);
	}
}

int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	cout<<n;
	srand(700453594);
	cout<<"a";
	int arr[n+1];
	cout<<"a";
	for(int i=0; i<n; i++)
	{
		arr[i]=rand()%10000;
	}
	quickSort(arr, 0, n);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
