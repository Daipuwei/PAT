#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A;
	string B;
	char PA;
	char PB;
	cin>>A>>PA>>B>>PB;
	
	int Sum_A =0;
	int Sum_B = 0;
	for ( int i = 0 ; i < A.length() ; i++){
		if ( A[i] == PA){
			Sum_A = Sum_A * 10 + (A[i] - '0');
		}
	}
	for ( int i = 0 ; i < B.length() ; i++){
		if ( B[i] == PB){
			Sum_B = Sum_B * 10 + (B[i] - '0');
		}
	}
	
	int sum = Sum_A + Sum_B;
	cout<<sum;
	
	return 0;
 } 
