#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
using namespace std;

void sort3(int& a, int& b, int& c){
	//X[A]<=X[B]<=X[C]
	if (c < a)
        swap(a, c);        
    if (b < a)
        swap(b, a);
    if (c < b)
        swap(c, b);

		
}
//adapted from Design and Analysis of algorithms by levitin 159 Lomuto partition
int partition1(int A[], int I[], int l, int r){
	int m=(l+r)/2;
	sort3(A[I[l]],A[I[m]],A[I[r]]);
	int p=A[I[l]];
	int i=l, j=r+1, temp;
	do{
		do
		{
			i++;
		} while (A[I[i]]<p);
		do
		{
			j--;
		} while (A[I[j]]>p);
		if(i<j){
			temp=I[i];
			I[i]=I[j];
			I[j]=temp;

		}
	}while(i<j);
	temp=I[l];
	I[l]=I[j];
	I[j]=temp;
	return j;
}

//kth value partition
int partition(int I[], int l, int r){
	int m=(l+r)/2;
	sort3(I[l],I[m],I[r]);
	int i=l, j=r+1, temp;
	int p=I[l];
	do{
		do
		{
			i++;
		} while (I[i]<p);
		do
		{
			j--;
		} while (I[j]>p);
		if(i<j){
			temp=I[i];
			I[i]=I[j];
			I[j]=temp;

		}
	}while(i<j);
	temp=I[l];
	I[l]=I[j];
	I[j]=temp;
	return j;
}

void kthValue(int index[], int n, int k){
	int P,a,b;
	a=0,b=n;
	do
	{
		P=partition(index, a, b);
		if(P==k)
			break;
		else if(P>a+(k-1))
			b=P-1;
		else{
			a=P+1;
		}
	}while(P!=k && b-1!=a);
	cout<<index[P];
}
//taken and adapted from  from Design and analysis of algorithms, Levitin 176
void quickSort(int A[], int I[], int l, int r){
	if(l<r)
	{
		int s=partition1(A,I,l,r);
		quickSort(A,I,l,s-1);
		quickSort(A,I,s+1, r);
		
	}
}
