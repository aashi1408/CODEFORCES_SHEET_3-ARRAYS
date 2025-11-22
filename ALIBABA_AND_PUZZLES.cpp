//ALIBABA_AND_PUZZLES

#include<iostream>
using namespace std;

int main()
{
	long long w,x,y,z;
	cin>>w>>x>>y>>z;
	
	if((w+x-y==z)||
	(w-x+y==z)||
	(w*x-y==z)||
	(w-x*y==z)||
	(w+x*y==z)||
	(w*x+y==z) )
	{
		cout<<"YES";
	}
		
	else cout<<"NO";
	
	return 0;
}
