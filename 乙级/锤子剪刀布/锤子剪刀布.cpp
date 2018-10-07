#include <iostream>
using namespace std;

int main()
{
	int C1[3] = {0},C2[3] = {0};
	int J1[3] = {0},J2[3] = {0};
	int B1[3] = {0},B2[3] = {0};
	int Num;
	cin>>Num;
	for ( int i = 0 ; i < Num ; i++){
		char A,B;
		cin>>A>>B;
		if ( A == B ){
			if ( A == 'C'){
				C1[1]++;
				C2[1]++;	
			}
			if ( A == 'J'){
				J1[1]++;
				J2[1]++; 	
			}
			if ( A == 'B'){
				B1[1]++;
				B2[1]++;
			}
		} else{
			if ( A == 'C'){
				if ( B == 'J'){
					C1[0]++;
					J2[2]++;
				}
				if ( B == 'B'){
					C1[2]++;
					B2[0]++;
				}
			}
			if ( A == 'J'){
				if ( B == 'C'){
					J1[2]++;
					C2[0]++;	
				}
				if ( B == 'B'){
					J1[0]++;
					B2[2]++;
				}
			}
			if ( A == 'B'){
				if ( B == 'C'){
					B1[0]++;
					C2[2]++;
				}
				if ( B == 'J'){
					B1[2]++;
					J2[0]++;
				}
			} 
		}
	}
	
	cout<<C1[0]+J1[0]+B1[0];
	for ( int i = 1 ; i < 3 ; i++){
		cout<<" "<<C1[i]+J1[i]+B1[i]; 
	} 
	
	cout<<endl<<C2[0]+J2[0]+B2[0];
	for ( int i = 1 ; i < 3 ; i++){
		cout<<" "<<C2[i]+J2[i]+B2[i]; 
	}
	
	cout<<endl;
	if ( (B1[0] >= C1[0]) && (B1[0] >= J1[0])){
		cout<<"B";
	}else if ( C1[0] >= J1[0]){
		cout<<"C";
	}
	else{
		cout<<"J";
	}
	cout<<" "; 
	if ( (B2[0] >= C2[0]) && (B2[0] >= J2[0])){
		cout<<"B";
	}else if ( C2[0] >= J2[0]){
		cout<<"C";
	}
	else{
		cout<<"J";
	}
	
	return 0;
 } 
