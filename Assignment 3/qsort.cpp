#include <iostream>
#include <fstream>
#include <chrono>
#include <cstdlib>
#include <string>
#include "qsort.h"
using namespace std;

void swap(int * a, int * b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void sort3(int& a, int& b, int& c){
	//X[A]<=X[B]<=X[C]
	if(a>c)
	{
		swap(a,c);
	}
	if(b>c)
	{
		swap(b,c);
	}
	if(a>b)
	{
		swap(b,a);
	}
}
//adapted from Design and Analysis of algorithms by levitin 159 Lomuto partition
int partition(int A[], int I[], int l, int r){
	int p=A[I[l]];
	int s=l;
	for(int i=l+1; i<=r; i++)
	{
		if(A[I[i]]<p)
		{
			s=s+1;
			swap(&I[s],&I[i]);
		}
	}
	swap(&I[l],&I[s]);
	return s;
}
int partition(int I[], int l, int r){
	int m=(l+r)/2;
	sort3(I[l],I[m],I[r]);
	int p=I[m];
	int s=l;
	for(int i=l+1; i<=r; i++)
	{
		if(I[i]<p)
		{
			s=s+1;
			swap(&I[s],&I[i]);
		}
	}
	swap(&I[l],&I[s]);
	return s;
}

int kthValue(int index[], int n, int k){
	int P,a,b;
	a=0,b=n;
	do
	{
		P=partition(index, a, b);
		if(P<k)
			a=k;
		if(P>k)
			b=k;
	}while(P!=k && b-1!=a);
	return P;
}
//taken and adapted from  from Design and analysis of algorithms, Levitin 176
void quickSort(int A[], int I[], int l, int r){
	if(l<r)
	{
		int s=partition(A,I,l,r);
		quickSort(A,I,l,s-1);
		quickSort(A,I,s+1, r);
		
	}
}
