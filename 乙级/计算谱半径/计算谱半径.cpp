#include <iostream>
#include <cmath> 
#include <cstdio> 
using namespace std;

int main()
{
	int N;
	cin>>N;
	double R[N];
	double max = 0;
	for ( int i = 0 ; i < N ; i++){
		int imaginary,real;
		cin>>real>>imaginary;
		R[i] = sqrt(real*real+imaginary*imaginary);
		if ( max < R[i]){
			max = R[i];
		}
	}
	printf("%.2f",max);
	
	return 0;
}
