#include <iostream>

using namespace std;
void generateRandos(int *arr, int n)
{
	srand(700453594);
	for(int i =0; i<n;i++)
	{
		arr[i]=rand()%n;
	}
}
void display(int *arr, int n) {
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";
   cout << endl;
}

void merge(int *arr, int l, int m, int r)
{
	int i,j,k,n1,n2;
	n1=m-l+1;
	n2=r-m;
	int arr1[n1], arr2[n2];
	for(i=0; i<n1;i++)
	{
		arr1[i]=arr[l+i];
	}
	for(j=0; j<n2;j++)
	{
		arr2[j]=arr[m+1+j];
	}
	i=0; j=0; k=l;
	
	while(i<n1 && j<n2)
	{
		if(arr1[i]<=arr2[j])
		{
			arr[k] = arr1[i];
			i++;
		}
		else
		{
			arr[k]=arr2[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=arr1[i];
		i++; k++;
	}
	while(i<n2)
	{
		arr[k]=arr1[i];
		j++; k++;
	}
}

void mergeSort(int *arr, int l, int r)
{
	int m;
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	}
	
}
int main(int argc, char **argv)
{
	
	int n=100000;
	int arr[100000];
	generateRandos(arr,n);
	cout << "Array before Sorting: ";
	display(arr,n);
	mergeSort(arr, 0, n-1);     //(n-1) for last index
	cout << "Array after Sorting: ";
	display(arr,n);
	
	return 0;
}

