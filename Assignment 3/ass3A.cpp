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


int partition(int arr[], int lower, int upper, int c[]){
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
			temp=c[i];
			c[i]=c[j];
			c[j]=temp;
		}
	}
	temp=arr[i+1];
	arr[i+1]=arr[upper];
	arr[upper]=temp;
	temp=c[i+1];
	c[i+1]=c[upper];
	c[upper]=temp;
	return i+1;
}
void quickSort(int arr[], int lower, int upper, int c[]){
	int j;
	if(lower<upper)
	{
		j=partition(arr,lower,upper,c);
		quickSort(arr,lower,j-1,c);
		quickSort(arr,j+1,upper,c);
	}
}

int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	//change to seeded by time
	srand(700453594);
	int arr[n+1];
	int u[n+1];
	int c[n+1];

	for(int i=0; i<n; i++)
	{
		c[i]=i;
		arr[i]=rand()%10000;
		u[i]=arr[i];
	}

	c[n]=n;
	arr[n]=10001;
	u[n]=10001;

	quickSort(u, 0, n-1, c);

	for(int i=0; i<n+1; i++)
	{
		if(i%10==0&&i!=0)
			cout<<endl;
		cout<<c[i]<<"\t";
	}
	cout<<endl;
	
	for(int i=0; i<n+1; i++)
	{
		if(i%10==0&&i!=0)
			cout<<endl;
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
