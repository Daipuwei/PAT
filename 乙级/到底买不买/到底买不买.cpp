#include <iostream>
#include <string>
using namespace std;

int main()
{
	string buy;
	string need;
	cin>>buy;
	cin>>need;
	for ( int i = 0 ; i < need.length() ; i++){
		for ( int j = 0 ; j < buy.length() ; j++){
			if ( need[i] == buy[j]){
				need[i] = '*';
				buy[j] = '*';
				break;
			}
		}
	}
	
	int cnt1 = 0;
	int cnt2 = 0;
	for ( int i = 0 ; i < buy.length() ;i++){
		if ( buy[i] != '*'){
			cnt1++;
		}
	}
	
	for ( int i = 0 ; i < need.length() ;i++){
		if ( need[i] != '*'){
			cnt2++;
		}
	}
	
	if ( cnt2 == 0)
		cout<<"Yes "<<cnt1;
	else
		cout<<"No "<<cnt2; 
	
	return 0;
}
