#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N,p;
	cin>>N>>p;
	int num[N];
	for ( int i = 0 ; i < N ; i++){
		cin>>num[i];
	}
	
	sort(num,num+N);
	int max = 0;
	int i,j;
	for ( i = 0 ; i < N ; i++){
		for ( j = i + max - 1 ; j < N ; j++){
			if ( num[i] * p < num[j]){
				break;
			}
			if ( j-i+1 >max){
				max = j-i+1;
			}
		}
	}
	cout<<max<<endl;
	
	return 0;
}
