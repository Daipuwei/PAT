#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
	int N;
	cin>>N;
	int num[N];
	int sorted[N];
	for ( int i = 0 ; i < N ; i++){
		cin>>num[i];
		sorted[i] = num[i];
	}
	sort(sorted,sorted+N);
	
	int len = 0;
	int pivot[N];
	int max = 0;
	for ( int i = 0 ; i < N ; i++){
		if ( max < num[i]){
			max = num[i];
		}
		if ( num[i] == sorted[i] && max == num[i]){
			pivot[len] = num[i];
			len++;
		}
	} 
	
	cout<<len<<endl;
	cout<<pivot[0];
	for ( int i = 1 ; i < len ; i++){
		cout<<" "<<pivot[i];
	}
	
	return 0;
}
