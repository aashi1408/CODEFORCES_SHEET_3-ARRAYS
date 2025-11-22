//REPLACEMENT

#include<iostream>
using namespace std;

int main()
{
	int Z;
	cin>>Z;
	int arr[Z];
	int c;
	
	for(int cz=0 ; cz<Z ; cz++)//INPUT
	{
		cin>>c;//to input the array
		arr[cz] = c;
	}
	for(int cl=0 ; cl<Z ; cl++)//PROCEDURE
	{
		if (arr[cl]>0)  arr[cl]=1;//replacing all positive values with 1
	
		else if(arr[cl]<0)  arr[cl]=2;//replacing all negative values with 2
		//0 remains 0
	}
	for(int tc=0 ; tc<Z ; tc++)//OUTPUT
	{
		cout<<arr[tc]<<" ";//printing arr after replacement
	}
}
