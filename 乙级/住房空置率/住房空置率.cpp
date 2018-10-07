#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int N;
	int D;
	float e;
	cin>>N>>e>>D;
	
	int K;
	float electricity;
	float possible_empty = 0.0;
	float empty = 0.0;
	
	for( int i = 0 ; i < N ; i++){
		cin>>K;
		int lower_e = 0;
		
		for ( int j = 0 ; j < K ; j++){
			cin>>electricity;
			if ( electricity < e){
				lower_e++;
			}
		}
		
		if ( lower_e * 2 > K){
			if ( K > D ){
				empty++;
			}else{
				possible_empty++; 
			}
		}
	}
	
	possible_empty = possible_empty / N * 100;
	empty = empty / N * 100;
	printf("%.1f%% %.1f%%",possible_empty,empty);
	
	return 0;
}
 
