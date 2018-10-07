#include <iostream>
using namespace std;

int main()
{
	int num[10];
	for ( int i = 0 ; i < 10 ; i++){
		cin>>num[i];
	} 
	for ( int i = 1 ; i < 10 ; i++){
		if ( num[i] > 0){
			num[i]--;
			cout<<i;
			break;
		} 
	}
	for ( int i = 0 ; i < 10 ; i++){
		for ( int j = 0 ; j < num[i] ; j++){
			cout<<i;
		}
	}
	
	return 0;
}
