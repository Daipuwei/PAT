#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int P = 0;
	int PA = 0;
	int PAT = 0;
	for (int i = 0 ; i < str.length() ; i++){
		if ( str[i] == 'P'){
			P++;
		}
		if ( str[i] == 'A'){
			PA += P;
			PA %= 1000000007;
		}
		if ( str[i] == 'T'){
			PAT += PA;
			PAT %= 1000000007;
		} 
	}
	cout<<PAT;
	
	return 0;
}
