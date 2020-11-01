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

using namespace std;


int partition(int arr[], int lower, int upper){
	int i,j,pivot,temp;
	pivot=arr[upper];
	i=lower-1;
	for(int j=lower; j<=upper-1;j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[upper];
	arr[upper]=temp;
	return i+1;
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
	srand(700453594);
	int arr[n+1];
	ofstream myfile;
	myfile.open("test.txt");
	for(int i=0; i<n; i++)
	{
		arr[i]=rand()%10000;
		myfile<<i<<" "<<arr[i]<<"\n";

	}
	arr[n+1]=10001;
	myfile.close();
	quickSort(arr, 0, n-1);
	for(int i=0; i<n; i++)
	{
		
		if(i%10==0)
			cout<<endl;
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
