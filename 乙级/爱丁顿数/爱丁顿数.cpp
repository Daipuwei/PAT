#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int distance[N];
	for ( int i = 0 ; i < N ; i++){
		cin>>distance[i];
	}
	
	sort(distance,distance+N);
	
	int E;
	if ( distance[0] > N){
		E = N;
		cout<<E;
	}else{
		E = 0;
		for ( int i = N-1 ; i >= 0 ; i--){
				if (distance[i] <= N-i ){
					E = N - i - 1;
					break; 
				}	
		}
		cout<<E; 
	}
	return 0;
}
