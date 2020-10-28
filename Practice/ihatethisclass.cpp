#include <iostream>

using namespace std;

int main()
{
	cout<<"Test";
	int n = 1000;
	int array [n];
	srand(700453594);
	int key = 500;
	for(int i = 0; i<n; i++)
	{
		array[i] = rand()%10000;
	}
	int found = 0;
	for(int i = 0; i<n; i++)
	{
		cout<< array[i] <<" "; 
	}
	int i = 0;
	while(i < n)
	{
		if(array[i]==key)
			found =i;
		i++;
	}
	cout << "\n"<< key<< " found at location "<<found;
	return 0;
}
