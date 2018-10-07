#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int n;
	cin>>n;
	while(n != 1)
	{
		if( n%2 ==0 )
		{
			n /= 2;
			count++;
		}
		else
		{
			n = (3*n+1)/2;
			count++;
		}
	}
	cout<<count;
	
	return 0;
 } 
