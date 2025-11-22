//POSITIONS_IN_ARRAY

#include<iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	int A[size];
	
	int ele , index ;
	
	for(int bm=0 ;bm<size ; bm++)
	/* if an element in the array A is less than or equal to 10
	then this loop will print that :
	first the index and second the element itself*/
	{
		cin>>ele;
		A[bm] = ele;
		if(A[bm]<=10)
		{
			index = bm;
			cout<<"A["<<index<<"] = "<<ele<<"\n";
		}
	}
	return 0;
}
