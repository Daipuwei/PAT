#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	char c[100];
	gets(c);
	int sum = 0;
	char pinyin[][9] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for ( int i = 0 ; i < strlen(c) ;i++ )
		sum += (c[i]-'0');
	int a[5];
	int i = 0;
	while ( sum != 0)
	{
		a[i++] = sum % 10;
		sum /= 10 ;
	}
	int count = 0;
	for ( int j = i-1 ; j >= 0 ; j-- )
	{
		cout<<pinyin[a[j]];
		if ( count != i-1)
			cout<<" ";
		count++;
	}
	cout<<"as";
	
	return 0;
}
