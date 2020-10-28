#include <iostream>
#include <chrono>
#include <climits>
using namespace std;

void generateRandosLONG(long long int *arr, int n)
{
	srand(700453594);
	for(int i =0; i<n;i++)
	{
		arr[i]=static_cast<long>((rand()%9223372036854775807)-9223372036854775807);
	}
}

void generateRandosINT(int *arr, int n)
{
	srand(700453594);
	for(int i =0; i<n;i++)
	{
		arr[i]=(rand()%INT_MAX)-INT_MAX;
	}
}

void mergeL(long long int *arr, int l, int m, int r)
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

void mergeSortL(long long int *arr, int l, int r)
{
	int m;
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergeSortL(arr,l,m);
		mergeSortL(arr,m+1,r);
		mergeL(arr,l,m,r);
	}
	m=0;
	m++;
	m--;
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
	m=0;
	m++;
	m--;
}

void insertionSort(int *arr,int n)
{
	int temp, h;
	for(int i =1; i<n;i++)
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
void insertionSortL(long long int *arr, int n)
{
	long long int temp;
	int h;
	for(int i =1; i<n;i++)
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


void runIt(int q)
{
	int n=q;
	int *arr,*arr1;
	long long int *arrl, *arr1l;
	arr=(int *) malloc(n*sizeof(int));
	arr1=(int *) malloc(n*sizeof(int));
	arrl=(long long int *) malloc(n*sizeof(long long int));
	arr1l=(long long int *) malloc(n*sizeof(long long int));

	generateRandosINT(arr,n);
	generateRandosINT(arr1,n);

	auto start = chrono::steady_clock::now();
	insertionSort(arr1,n);
	auto end = chrono::steady_clock::now();
	cout<< q<<" ints sorted in "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<" nanoseconds by insertion sort"<<endl;
	start = chrono::steady_clock::now();
	mergeSort(arr, 0, n-1);     //(n-1) for last index
	end = chrono::steady_clock::now();
	cout<< q<<" ints sorted in "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<" nanoseconds by merge sort"<<endl;
	generateRandosLONG(arrl,n);
	generateRandosLONG(arr1l,n);
	start = chrono::steady_clock::now();
	insertionSortL(arr1l,n);
	end = chrono::steady_clock::now();
	cout<< q<<" long long ints sorted in "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<" nanoseconds by insertion sort"<<endl;
	start = chrono::steady_clock::now();
	mergeSortL(arrl, 0, n-1);
	end = chrono::steady_clock::now();
	cout<< q<<" long long ints sorted in "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<" nanoseconds by merge sort"<<endl;
	delete arr;delete arr1;delete arrl;delete arr1l;
}

int main(int argc, char **argv)
{
	cout<<"What would you like the upper bound to be? (will start at 100,000 and increment by 100,000 until exceeding upper bound)"<<endl;
	int x;
	cin>>x;
	for(int i=100000; i<=x; i+=100000)
	{
		runIt(i);
	}
	return 0;
}


