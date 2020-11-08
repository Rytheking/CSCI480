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
		cout<<"How many elements would you like to sort? (1k is max)"<<endl;
		cin>>n;
		invalidinput=(n<=1000);
		if(!invalidinput)
			cout<<"I'm sorry "<<n<<" is over the 10k limit by "<<n-1000<<endl;
	}
	cout<<"a"<<endl;
	A = (int *) malloc((n)*sizeof(int));
	I = (int *) malloc((n)*sizeof(int));
	srand(70);
	for(int i=0; i<n; i++)
	{
		I[i]=i;
		A[i]=rand()%10000;
	}
	int k;
	while(1){
		cout<<"input k value"<<endl;
		cin>>k;
		if(k<n&&0<k)
		{
			kthValue(A,n, k);
		}
		else
			break;
	}

return 0;	
}
