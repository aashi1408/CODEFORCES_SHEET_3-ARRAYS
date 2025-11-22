//REVERSING

#include<iostream>
#include<cstring>
using namespace std;

void rev_arr(int arr[],int N)
{

	int j = N;//if we do N-- , this will forget the loop
	int b[N];

	for(int i=1 ; i<=N ; i++)
	{

		b[i]= arr[j];
		j--;
	}
	for(int i=1;i<=N;i++)
	{
		cout<<b[i]<<" ";
	}
}

int main()
{
	int N;
	cin>>N;
	int arr[N];
	int x;
	for(int i=1 ; i<=N ; i++)
	{
		cin>>x;
		arr[i] = x;
	}
	rev_arr(arr,N);
	
	return 0;
}
