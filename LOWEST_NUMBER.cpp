//LOWEST_NUMBER

#include<iostream>
using namespace std;

int main()
{
	int I;//size of A
	cin>>I;
	
	int A[I];//declaring an array A of size I
	int di;//to input elements 
	for(int id=1 ; id<=I ; id++)//INPUT THE ARRAY
	{
		cin>>di;
		A[id] = di;
	}
	int mn = A[1];
	int index = 1;
	
	for(int dk=1 ; dk<I ; dk++)//FINDING THE MIN ELEMENT
	{
		if(A[dk+1]<mn)
		{
			mn = A[dk+1];
			index = dk+1;
		}
	}
	cout<<mn<<" "<<index;//PRINTING THE MIN ELEMENT AND ITS INDEX
	
	return 0;
}
